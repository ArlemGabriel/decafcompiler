%{
//----------------------------- Declaraciones -----------------------------
#include <iostream>
#include "funcionesParser.h"
using namespace std;

typedef NodeParseTree * pNodeParseTree;
int contNodos=0;


pNodeParseTree nodo = new NodeParseTree();
std::vector<pNodeParseTree> childsToAdd;
std::vector<std::vector<pNodeParseTree>> listChildsToAdd;
void createNewNode(string pToken, string pValue, int pRow, int pColumn);
void createNewListaChilds();
void addNodeToChilds();
void addChildsToNode();
void printTree(pNodeParseTree root);
void printChilds(pNodeParseTree root, int tabs);
std::vector<string> treeToPrint;

extern int yylex(void);
extern void printTable();
extern int yyparse();
extern FILE *yyin;

int yyerror(char *s);
%}

//----------------------------- Definiciones -----------------------------
//Palabras reservadas
%token CLASS VOID STRING THIS WHILE BREAK READINTEGER INT EXTENDS IF NEW READLINE DOUBLE INTERFACE
%token IMPLEMENTS ELSE NEWARRAY TRUE BOOL TNULL FOR RETURN PRINT FALSE

//Datos
%token ID CONSINTEGERDEC CONSINTEGERHEX CONSDOUBLEDEC CONSDOUBLECIEN CONSSTRING CONSBOOLEAN

//Operadores
//      +       -             *           /       %       <          <=            >           >=
%token SUM SUBTRACTION MULTIPLICATION DIVISION MODULE LESSTHAN LESSEQUALTHAN GREATERTHAN GREATEREQUALTHAN
//       =     ==       !=    && ||     !        ;       ,    .      [        ]       (     )
%token EQUAL EEQUAL DISTINCT AND OR NEGATION SEMICOLON COMMA DOT LBRACKET RBRACKET LPAREN RPAREN
//        {     }
%token LBRACE RBRACE

%left OR
%left AND
%left DISTINCT EEQUAL
%left SUM SUBTRACTION
%left MULTIPLICATION DIVISION MODULE
%left NEGATION
%left DOT LBRACKET

%nonassoc COMMA
%nonassoc ELSE
%nonassoc LPAREN LBRACE
%nonassoc ID
%nonassoc EQUAL 
%nonassoc LESSTHAN LESSEQUALTHAN GREATEREQUALTHAN GREATERTHAN 
%nonassoc VOID CLASS INTERFACE DOUBLE INT STRING BOOL


%%
//----------------------------- Producciones -----------------------------
Program			: Decl															{createNewListaChilds();	createNewNode("Decl","",0,0);	addChildsToNode();}		
				;
		
Decl 			: VariableDecl OtraDecl											{createNewListaChilds();	createNewNode("VariableDecl","",0,0);	addChildsToNode();	addNodeToChilds();													createNewNode("OtraDecl","",0,0);		addChildsToNode();		addNodeToChilds();}		
				| FunctionDecl OtraDecl											{createNewListaChilds(); 	createNewNode("FunctionDecl","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode();		addNodeToChilds();}		
				| ClassDecl OtraDecl											{createNewListaChilds(); 	createNewNode("ClassDecl","",0,0);		addChildsToNode();	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode();		addNodeToChilds();}		
				| InterfaceDecl OtraDecl										{createNewListaChilds(); 	createNewNode("InterfaceDecl","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode();		addNodeToChilds();}		
				;

OtraDecl		: Decl OtraDecl													{createNewListaChilds();	createNewNode("OtraDecl","",0,0);		addChildsToNode();	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode();		addNodeToChilds();}		
				|																%prec EQUAL {createNewListaChilds();}
				;

VariableDecl 	: Variable SEMICOLON											{createNewListaChilds(); 	createNewNode("Variable","",0,0);		addChildsToNode();	addNodeToChilds();
					createNewNode("SEMICOLON",";",0,0);		addNodeToChilds();}
				;							

Variable 		: Type ID														{createNewListaChilds();	createNewNode("Type","",0,0); 			addChildsToNode();	addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();}		
				;

Type 			: INT															{createNewListaChilds();	createNewNode("INT","",0,0);			addNodeToChilds();}		
				| DOUBLE														{createNewListaChilds(); 	createNewNode("DOUBLE","",0,0);			addNodeToChilds();}		
				| BOOL															{createNewListaChilds(); 	createNewNode("BOOL","",0,0);			addNodeToChilds();}
				| STRING														{createNewListaChilds();	createNewNode("STRING","",0,0);			addNodeToChilds();}
				| ID															{createNewListaChilds(); 	createNewNode("ID","",0,0);				addNodeToChilds();}
				| Type LBRACKET RBRACKET										{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode();	addNodeToChilds();
						createNewNode("LBRACKET","",0,0);	addNodeToChilds();
						createNewNode("RBRACKET","",0,0);	addNodeToChilds();}
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock						{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode(); addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode();		addNodeToChilds();					
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("StmtBlock","",0,0);		addChildsToNode();		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN StmtBlock						{createNewListaChilds(); 	createNewNode("VOID","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("StmtBlock","",0,0);		addChildsToNode();		addNodeToChilds();}
				;

Formals 		: Variable FormalsVars											{createNewListaChilds(); 	createNewNode("Variable","",0,0);		addChildsToNode();	addNodeToChilds();
					createNewNode("FormalsVars","",0,0);	addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

FormalsVars		: COMMA Variable FormalsVars									{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Variable","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("FormalsVars","",0,0);	addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE		{createNewListaChilds(); 	createNewNode("CLASS","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("ExtendDecl","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("ImplementsDecl","",0,0);	addChildsToNode();		addNodeToChilds();
					createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

ExtendDecl		: EXTENDS ID													{createNewListaChilds(); 	createNewNode("EXTENDS","",0,0);		addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

ImplementsDecl	: IMPLEMENTS ID OtroID											{createNewListaChilds(); 	createNewNode("IMPLEMENTS","",0,0);		addNodeToChilds();
						createNewNode("ID","",0,0);			addNodeToChilds();
						createNewNode("OtroID","",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL		{createNewListaChilds();}
				;

OtroID			: COMMA ID OtroID												{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("OtroID","",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

Field 			: VariableDecl Field											{createNewListaChilds(); 	createNewNode("VariableDecl","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode();		addNodeToChilds();}
				| FunctionDecl Field											{createNewListaChilds();	createNewNode("FunctionDecl","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE							{createNewListaChilds();	createNewNode("INTERFACE","",0,0);		addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype				{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode();		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype				{createNewListaChilds(); 	createNewNode("VOID","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE						{createNewListaChilds(); 	createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("BlockVariables","",0,0);	addChildsToNode();		addNodeToChilds();
					createNewNode("BlockStmts","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

BlockVariables	: VariableDecl BlockVariables									{createNewListaChilds();	createNewNode("VariableDecl","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("BlockVariables","",0,0);	addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

BlockStmts		: Stmt BlockStmts												{createNewListaChilds(); 	createNewNode("Stmt","",0,0);			addChildsToNode();	addNodeToChilds();	
					createNewNode("BlockStmts","",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

Stmt 			: ExprOpcional SEMICOLON										{createNewListaChilds(); 	createNewNode("ExprOpcional","",0,0);	addChildsToNode();	addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				| IfStmt														{createNewListaChilds(); 	createNewNode("IfStmt","",0,0);			addChildsToNode();	addNodeToChilds();}
				| WhileStmt														{createNewListaChilds(); 	createNewNode("WhileStmt","",0,0);		addChildsToNode();	addNodeToChilds();}
				| ForStmt														{createNewListaChilds(); 	createNewNode("ForStmt","",0,0);		addChildsToNode();	addNodeToChilds();}
				| BreakStmt														{createNewListaChilds(); 	createNewNode("BreakStmt","",0,0);		addChildsToNode();	addNodeToChilds();}
				| ReturnStmt													{createNewListaChilds(); 	createNewNode("ReturnStmt","",0,0);		addChildsToNode();	addNodeToChilds();}
				| PrintStmt														{createNewListaChilds(); 	createNewNode("PrintStmt","",0,0);		addChildsToNode();	addNodeToChilds();}
				| StmtBlock														{createNewListaChilds(); 	createNewNode("StmtBlock","",0,0);		addChildsToNode();	addNodeToChilds();}
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt							{createNewListaChilds(); 	createNewNode("IF","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("ElseStmt","",0,0);		addChildsToNode();		addNodeToChilds();}
				;

ElseStmt		: ELSE Stmt														{createNewListaChilds(); 	createNewNode("ELSE","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt									{createNewListaChilds(); 	createNewNode("WHILE","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode();		addNodeToChilds();}
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt	{createNewListaChilds(); createNewNode("FOR","",0,0); addNodeToChilds();
					createNewNode("LPAREN","",0,0); 		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0); 	addChildsToNode();		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0); 		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0);	addChildsToNode();		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0); 	addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0); 		addNodeToChilds();
					createNewNode("Stmt","",0,0); 			addChildsToNode();		addNodeToChilds();}
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON									{createNewListaChilds();	createNewNode("RETURN","",0,0);			addNodeToChilds();
					createNewNode("ExprOpcional","",0,0);	addChildsToNode();		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

BreakStmt 		: BREAK SEMICOLON												{createNewListaChilds(); 	createNewNode("BREAK","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON					{createNewListaChilds();	createNewNode("PRINT","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

OtraExpr		: COMMA Expr OtraExpr											{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

ExprOpcional	: Expr															{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();}
				|																%prec EQUAL	{createNewListaChilds();}
				;

Expr 			: LValue EQUAL Expr												{createNewListaChilds(); 	createNewNode("LValue","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("EQUAL","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Constant														{createNewListaChilds();	createNewNode("Constant","",0,0);		addChildsToNode();	addNodeToChilds();}	
				| LValue														{createNewListaChilds(); 	createNewNode("LValue","",0,0);			addChildsToNode();	addNodeToChilds();}
				| THIS															{createNewListaChilds(); 	createNewNode("THIS","",0,0);			addNodeToChilds();}
				| Call															{createNewListaChilds(); 	createNewNode("Call","",0,0);			addChildsToNode();	addNodeToChilds();}
				| LPAREN Expr RPAREN											{createNewListaChilds(); 	createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| Expr SUM Expr													{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("SUM","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr SUBTRACTION Expr											{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("SUBTRACTION","",0,0);							addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr MULTIPLICATION Expr										{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("MULTIPLICATION","",0,0);	addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr DIVISION Expr											{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("DIVISION","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr MODULE Expr												{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("MODULE","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| SUBTRACTION Expr	%prec NEGATION								{createNewListaChilds(); createNewNode("SUBTRACTION","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}		
				| Expr LESSTHAN Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("LESSTHAN","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr LESSEQUALTHAN Expr										{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("LESSEQUALTHAN","",0,0);	addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr GREATERTHAN Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("GREATERTHAN","",0,0);						addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr GREATEREQUALTHAN Expr									{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("GREATEREQUALTHAN","",0,0);					addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr EEQUAL Expr												{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("EEQUAL","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr DISTINCT Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("DISTINCT","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr AND Expr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("AND","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| Expr OR Expr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("OR","",0,0);				addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| NEGATION Expr													{createNewListaChilds(); createNewNode("NEGATION","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();}
				| READINTEGER LPAREN RPAREN										{createNewListaChilds(); createNewNode("READINTEGER","",0,0);		addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}	
				| READLINE LPAREN RPAREN										{createNewListaChilds(); createNewNode("READLINE","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| NEW LPAREN ID RPAREN											{createNewListaChilds(); createNewNode("NEW","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| NEWARRAY LPAREN Expr COMMA Type RPAREN						{createNewListaChilds(); createNewNode("NEWARRAY","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Type","",0,0);			addChildsToNode();		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				;
				
LValue 			: ID															{createNewListaChilds(); createNewNode("ID","",0,0);				addNodeToChilds();}
				| Expr DOT ID 													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("DOT","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();}
				| Expr LBRACKET Expr RBRACKET									{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("LBRACKET","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode();	addNodeToChilds();
					createNewNode("RBRACKET","",0,0);		addNodeToChilds();}
				;

Call 			: ID LPAREN Actuals RPAREN										{createNewListaChilds(); createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Actuals","",0,0);		addChildsToNode();	addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| Expr DOT ID LPAREN Actuals RPAREN								{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("DOT","",0,0);			addNodeToChilds();
					createNewNode("ID","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Actuals","",0,0);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				;

Actuals 		: Expr OtraExpr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode();	addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode();	addNodeToChilds();}	
				|																%prec EQUAL	{createNewListaChilds();}
				;

Constant 		: CONSINTEGERDEC												{createNewListaChilds(); createNewNode("CONSINTEGERDEC","",0,0);	addNodeToChilds();}
				| CONSINTEGERHEX												{createNewListaChilds(); createNewNode("CONSINTEGERHEX","",0,0);	addNodeToChilds();}
				| CONSDOUBLEDEC													{createNewListaChilds(); createNewNode("CONSDOUBLEDEC","",0,0);		addNodeToChilds();}
				| CONSDOUBLECIEN 												{createNewListaChilds(); createNewNode("CONSDOUBLECIEN","",0,0);	addNodeToChilds();}
				| CONSBOOLEAN													{createNewListaChilds(); createNewNode("CONSBOOLEAN","",0,0);		addNodeToChilds();}
				| CONSSTRING 													{createNewListaChilds(); createNewNode("CONSSTRING","",0,0);		addNodeToChilds();}
				| TNULL															{createNewListaChilds(); createNewNode("TNULL","",0,0);				addNodeToChilds();}
				;

%%

//----------------------------- Funciones -----------------------------

int yyerror(char *s){
	printf("\nERROR\n");
	return 1;
}

int main(int argcount, char **argvector)
{
		// Open a file handle to a particular file:
	FILE *myfile = fopen(argvector[1], "r");
	// Make sure it is valid:
	if (!myfile) {
		cout << "No se puede leer el archivo con código o no existe" << endl;
		return -1;
	}
	// Set Flex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	//yylex();  
	
	// Parse through the input:
	yyparse();
	printTable();
	printTree(nodo);
}


void createNewListaChilds(){
	listChildsToAdd.push_back(childsToAdd);
}

void createNewNode(string pToken, string pValue, int pRow, int pColumn){		
	nodo= newNode(pToken, pValue, pRow, pColumn);		
}

void addNodeToChilds(){							
		listChildsToAdd.at(listChildsToAdd.size()-1).push_back(nodo);
}	

void addChildsToNode(){	
	int position = listChildsToAdd.size()-2;
	if(position>=0){
		for(int i=0;i<listChildsToAdd.at(position).size();i++)
		{
			pNodeParseTree child = listChildsToAdd.at(position).at(i);
			nodo->addChild(child);	
		}
		listChildsToAdd.erase(listChildsToAdd.begin() + position);
	}
}


void printTree(pNodeParseTree root){	
	cout << "Program" << "\n";
	cout << " -" << root->token << "\n";

	printChilds(root, 1);
	for(int i=treeToPrint.size();i>0;i--){
		cout<<treeToPrint[i];
	}
}

void printChilds(pNodeParseTree root, int tabs){
	for(int i=0;i<root->childs.size();i++)
    {
		//Agarra en hijo del parametro nodo root
		pNodeParseTree child = root->childs.at(i);	
		
		//Si tiene otros hijos los imprime
		if(child->childs.size()>0)
			printChilds(child,tabs+1);

		string nodeToPrint="";
		//Se cuentan la cantidad de tabs necesarios		
		int contHijos=0;
		for(int j=0;j<tabs;j++){
			if(j<15)
				nodeToPrint=nodeToPrint+" ";
			else							
				contHijos++;			
		}				

		nodeToPrint=nodeToPrint+"-";
		//Por lo grande del arbol se muestra con numeros en lugar de tabs
		if(contHijos>0)
			nodeToPrint = nodeToPrint + "H(" + std::to_string(contHijos) + ") ";
			//cout << "H(" << contHijos << ") ";

		//Imprime el token del nodo actual y si tiene valor tambien lo imprime
		if(child->value == "")	
			nodeToPrint = nodeToPrint + child->token + "\n";		
			//cout << child->token << "\n";
		else			
			nodeToPrint = nodeToPrint + child->token + " Valor: " + child->value + "\n";
			//cout << child->token << "Valor: " << child->value << "\n";		

		treeToPrint.push_back(nodeToPrint);	
	}

}
