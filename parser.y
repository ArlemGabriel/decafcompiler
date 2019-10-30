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
void addBlankToChilds();
void createNewListaChilds();
void addNodeToChilds();
void addChildsToNode(int offset);
void printTree(pNodeParseTree root);
void printChilds(pNodeParseTree root, int tabs);
std::vector<string> treeToPrint;

extern void addError(int pRow,int pColumn,string pError);
extern int yylex(void);
extern void printTable();
extern int yyparse();
extern FILE *yyin;
extern int yylineno;
extern int yycolumn;

int yyerror(char *s);
%}

//----------------------------- Definiciones -----------------------------
//Palabras reservadas
%token CLASS VOID STRING THIS WHILE BREAK READINTEGER INT EXTENDS IF NEW READLINE DOUBLE INTERFACE
%token IMPLEMENTS ELSE NEWARRAY TRUE BOOL TNULL FOR RETURN PRINT FALSE

//Operadores
//      +       -             *           /       %       <          <=            >           >=
%token SUM SUBTRACTION MULTIPLICATION DIVISION MODULE LESSTHAN LESSEQUALTHAN GREATERTHAN GREATEREQUALTHAN
//       =     ==       !=    && ||     !        ;       ,    .      [        ]       (     )
%token EQUAL EEQUAL DISTINCT AND OR NEGATION SEMICOLON COMMA DOT LBRACKET RBRACKET LPAREN RPAREN
//        {     }
%token LBRACE RBRACE

//Datos
%token <sval> ID 
%token <sval> CONSINTEGERDEC
%token <sval> CONSINTEGERHEX 
%token <sval> CONSDOUBLEDEC
%token <sval> CONSDOUBLECIEN
%token <sval> CONSSTRING
%token <sval> CONSBOOLEAN

%union {
    char* sval;
}

%left OR
%left AND
%left DISTINCT EEQUAL
%left SUM SUBTRACTION
%left MULTIPLICATION DIVISION MODULE
%left NEGATION
%left DOT LBRACKET

%nonassoc COMMA
%nonassoc LPAREN LBRACE
%nonassoc ID
%nonassoc EQUAL 
%nonassoc LESSTHAN LESSEQUALTHAN GREATEREQUALTHAN GREATERTHAN 
%nonassoc VOID CLASS INTERFACE DOUBLE INT STRING BOOL


%%
//----------------------------- Producciones -----------------------------
Program			: Decl															{createNewListaChilds();	createNewNode("Decl","",0,0);	addChildsToNode(0);}		
				;
		
Decl 			: VariableDecl OtraDecl											{createNewListaChilds();	createNewNode("VariableDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();													
					createNewNode("OtraDecl","",0,0);		addChildsToNode(0);		addNodeToChilds();}		
				| FunctionDecl OtraDecl											{createNewListaChilds(); 	createNewNode("FunctionDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode(0);		addNodeToChilds();}		
				| ClassDecl OtraDecl											{createNewListaChilds(); 	createNewNode("ClassDecl","",0,0);		addChildsToNode(1);	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode(0);		addNodeToChilds();}		
				| InterfaceDecl OtraDecl										{createNewListaChilds(); 	createNewNode("InterfaceDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode(0);		addNodeToChilds();}		
				;

OtraDecl		: Decl OtraDecl													{createNewListaChilds();	createNewNode("OtraDecl","",0,0);		addChildsToNode(1);	addNodeToChilds();
					createNewNode("OtraDecl","",0,0);		addChildsToNode(0);		addNodeToChilds();}		
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

VariableDecl 	: Variable SEMICOLON											{createNewListaChilds(); 	createNewNode("Variable","",0,0);		addChildsToNode(0);	addNodeToChilds();
					createNewNode("SEMICOLON",";",0,0);		addNodeToChilds();}
				;							

Variable 		: Type ID														{createNewListaChilds();	createNewNode("Type","",0,0); 			addChildsToNode(0);	addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();}		
				;

Type 			: INT															{createNewListaChilds();	createNewNode("INT","",0,0);			addNodeToChilds();}		
				| DOUBLE														{createNewListaChilds(); 	createNewNode("DOUBLE","",0,0);			addNodeToChilds();}		
				| BOOL															{createNewListaChilds(); 	createNewNode("BOOL","",0,0);			addNodeToChilds();}
				| STRING														{createNewListaChilds();	createNewNode("STRING","",0,0);			addNodeToChilds();}
				| ID															{createNewListaChilds(); 	createNewNode("ID",$1,0,0);				addNodeToChilds();}
				| Type LBRACKET RBRACKET										{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode(0);	addNodeToChilds();
						createNewNode("LBRACKET","",0,0);	addNodeToChilds();
						createNewNode("RBRACKET","",0,0);	addNodeToChilds();}
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock						{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode(2); addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode(1);		addNodeToChilds();					
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("StmtBlock","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN StmtBlock						{createNewListaChilds(); 	createNewNode("VOID","",0,0);			addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode(1);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("StmtBlock","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				;

Formals 		: Variable FormalsVars											{createNewListaChilds(); 	createNewNode("Variable","",0,0);		addChildsToNode(1);	addNodeToChilds();
					createNewNode("FormalsVars","",0,0);	addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

FormalsVars		: COMMA Variable FormalsVars									{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Variable","",0,0);		addChildsToNode(1);		addNodeToChilds();
					createNewNode("FormalsVars","",0,0);	addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE		{createNewListaChilds(); 	createNewNode("CLASS","",0,0);			addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("ExtendDecl","",0,0);		addChildsToNode(2);		addNodeToChilds();
					createNewNode("ImplementsDecl","",0,0);	addChildsToNode(1);		addNodeToChilds();
					createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode(0);		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

ExtendDecl		: EXTENDS ID													{createNewListaChilds(); 	createNewNode("EXTENDS","",0,0);		addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

ImplementsDecl	: IMPLEMENTS ID OtroID											{createNewListaChilds(); 	createNewNode("IMPLEMENTS","",0,0);		addNodeToChilds();
						createNewNode("ID",$2,0,0);			addNodeToChilds();
						createNewNode("OtroID","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

OtroID			: COMMA ID OtroID												{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("OtroID","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

Field 			: VariableDecl Field											{createNewListaChilds(); 	createNewNode("VariableDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| FunctionDecl Field											{createNewListaChilds();	createNewNode("FunctionDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();
					createNewNode("Field","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE							{createNewListaChilds();	createNewNode("INTERFACE","",0,0);		addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode(0);		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype				{createNewListaChilds(); 	createNewNode("Type","",0,0);			addChildsToNode(2);	addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode(1);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype				{createNewListaChilds(); 	createNewNode("VOID","",0,0);			addNodeToChilds();
					createNewNode("ID",$2,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Formals","",0,0);		addChildsToNode(1);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("Prototype","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE						{createNewListaChilds(); 	createNewNode("LBRACE","",0,0);			addNodeToChilds();
					createNewNode("BlockVariables","",0,0);	addChildsToNode(1);		addNodeToChilds();
					createNewNode("BlockStmts","",0,0);		addChildsToNode(0);		addNodeToChilds();
					createNewNode("RBRACE","",0,0);			addNodeToChilds();}
				;

BlockVariables	: VariableDecl BlockVariables									{createNewListaChilds();	createNewNode("VariableDecl","",0,0);	addChildsToNode(1);	addNodeToChilds();
					createNewNode("BlockVariables","",0,0);	addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

BlockStmts		: Stmt BlockStmts												{createNewListaChilds(); 	createNewNode("Stmt","",0,0);			addChildsToNode(1);	addNodeToChilds();	
					createNewNode("BlockStmts","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

Stmt 			: ExprOpcional SEMICOLON										{createNewListaChilds(); 	createNewNode("ExprOpcional","",0,0);	addChildsToNode(0);	addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				| IfStmt														{createNewListaChilds(); 	createNewNode("IfStmt","",0,0);			addChildsToNode(0);	addNodeToChilds();}
				| WhileStmt														{createNewListaChilds(); 	createNewNode("WhileStmt","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				| ForStmt														{createNewListaChilds(); 	createNewNode("ForStmt","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				| BreakStmt														{createNewListaChilds(); 	createNewNode("BreakStmt","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				| ReturnStmt													{createNewListaChilds(); 	createNewNode("ReturnStmt","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				| PrintStmt														{createNewListaChilds(); 	createNewNode("PrintStmt","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				| StmtBlock														{createNewListaChilds(); 	createNewNode("StmtBlock","",0,0);		addChildsToNode(0);	addNodeToChilds();}
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt							{createNewListaChilds(); 	createNewNode("IF","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(2);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode(1);		addNodeToChilds();
					createNewNode("ElseStmt","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				;

ElseStmt		: ELSE Stmt														{createNewListaChilds(); 	createNewNode("ELSE","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt									{createNewListaChilds(); 	createNewNode("WHILE","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(1);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("Stmt","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt	{createNewListaChilds(); createNewNode("FOR","",0,0); addNodeToChilds();
					createNewNode("LPAREN","",0,0); 		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0); 	addChildsToNode(3);		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0); 		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0);	addChildsToNode(2);		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();
					createNewNode("ExprOpcional","",0,0); 	addChildsToNode(1);		addNodeToChilds();
					createNewNode("RPAREN","",0,0); 		addNodeToChilds();
					createNewNode("Stmt","",0,0); 			addChildsToNode(0);		addNodeToChilds();}
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON									{createNewListaChilds();	createNewNode("RETURN","",0,0);			addNodeToChilds();
					createNewNode("ExprOpcional","",0,0);	addChildsToNode(0);		addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

BreakStmt 		: BREAK SEMICOLON												{createNewListaChilds(); 	createNewNode("BREAK","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON					{createNewListaChilds();	createNewNode("PRINT","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(1);		addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode(0);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();
					createNewNode("SEMICOLON","",0,0);		addNodeToChilds();}
				;

OtraExpr		: COMMA Expr OtraExpr											{createNewListaChilds(); 	createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(1);		addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode(0);		addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

ExprOpcional	: Expr															{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode(0);	addNodeToChilds();}
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

Expr 			: LValue EQUAL Expr												{createNewListaChilds(); 	createNewNode("LValue","",0,0);			addChildsToNode(1);	addNodeToChilds();
					createNewNode("EQUAL","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Constant														{createNewListaChilds();	createNewNode("Constant","",0,0);		addChildsToNode(0);	addNodeToChilds();}	
				| LValue														{createNewListaChilds(); 	createNewNode("LValue","",0,0);			addChildsToNode(0);	addNodeToChilds();}
				| THIS															{createNewListaChilds(); 	createNewNode("THIS","",0,0);			addNodeToChilds();}
				| Call															{createNewListaChilds(); 	createNewNode("Call","",0,0);			addChildsToNode(0);	addNodeToChilds();}
				| LPAREN Expr RPAREN											{createNewListaChilds(); 	createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| Expr SUM Expr													{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode(1);	addNodeToChilds();
					createNewNode("SUM","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr SUBTRACTION Expr											{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode(1);	addNodeToChilds();
					createNewNode("SUBTRACTION","",0,0);							addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr MULTIPLICATION Expr										{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode(1);	addNodeToChilds();
					createNewNode("MULTIPLICATION","",0,0);	addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr DIVISION Expr											{createNewListaChilds(); 	createNewNode("Expr","",0,0);			addChildsToNode(1);	addNodeToChilds();
					createNewNode("DIVISION","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr MODULE Expr												{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("MODULE","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| SUBTRACTION Expr	%prec NEGATION								{createNewListaChilds(); createNewNode("SUBTRACTION","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}		
				| Expr LESSTHAN Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("LESSTHAN","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr LESSEQUALTHAN Expr										{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("LESSEQUALTHAN","",0,0);	addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr GREATERTHAN Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("GREATERTHAN","",0,0);						addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr GREATEREQUALTHAN Expr									{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("GREATEREQUALTHAN","",0,0);					addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr EEQUAL Expr												{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("EEQUAL","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr DISTINCT Expr											{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("DISTINCT","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr AND Expr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("AND","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| Expr OR Expr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("OR","",0,0);				addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| NEGATION Expr													{createNewListaChilds(); createNewNode("NEGATION","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);		addNodeToChilds();}
				| READINTEGER LPAREN RPAREN										{createNewListaChilds(); createNewNode("READINTEGER","",0,0);		addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}	
				| READLINE LPAREN RPAREN										{createNewListaChilds(); createNewNode("READLINE","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| NEW LPAREN ID RPAREN											{createNewListaChilds(); createNewNode("NEW","",0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("ID",$3,0,0);				addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| NEWARRAY LPAREN Expr COMMA Type RPAREN						{createNewListaChilds(); createNewNode("NEWARRAY","",0,0);			addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(1);		addNodeToChilds();
					createNewNode("COMMA","",0,0);			addNodeToChilds();
					createNewNode("Type","",0,0);			addChildsToNode(0);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				;
				
LValue 			: ID															{createNewListaChilds(); createNewNode("ID",$1,0,0);				addNodeToChilds();}
				| Expr DOT ID 													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(0);	addNodeToChilds();
					createNewNode("DOT","",0,0);			addNodeToChilds();
					createNewNode("ID",$3,0,0);				addNodeToChilds();}
				| Expr LBRACKET Expr RBRACKET									{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("LBRACKET","",0,0);		addNodeToChilds();
					createNewNode("Expr","",0,0);			addChildsToNode(0);	addNodeToChilds();
					createNewNode("RBRACKET","",0,0);		addNodeToChilds();}
				;

Call 			: ID LPAREN Actuals RPAREN										{createNewListaChilds(); createNewNode("ID",$1,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Actuals","",0,0);		addChildsToNode(0);	addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				| Expr DOT ID LPAREN Actuals RPAREN								{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(0);	addNodeToChilds();
					createNewNode("DOT","",0,0);			addNodeToChilds();
					createNewNode("ID",$3,0,0);				addNodeToChilds();
					createNewNode("LPAREN","",0,0);			addNodeToChilds();
					createNewNode("Actuals","",0,0);		addNodeToChilds();
					createNewNode("RPAREN","",0,0);			addNodeToChilds();}
				;

Actuals 		: Expr OtraExpr													{createNewListaChilds(); createNewNode("Expr","",0,0);				addChildsToNode(1);	addNodeToChilds();
					createNewNode("OtraExpr","",0,0);		addChildsToNode(0);	addNodeToChilds();}	
				|																%prec EQUAL {createNewListaChilds();addBlankToChilds();}
				;

Constant 		: CONSINTEGERDEC												{createNewListaChilds(); createNewNode("CONSINTEGERDEC",$1,0,0);	addNodeToChilds();}
				| CONSINTEGERHEX												{createNewListaChilds(); createNewNode("CONSINTEGERHEX",$1,0,0);	addNodeToChilds();}
				| CONSDOUBLEDEC													{createNewListaChilds(); createNewNode("CONSDOUBLEDEC",$1,0,0);		addNodeToChilds();}
				| CONSDOUBLECIEN 												{createNewListaChilds(); createNewNode("CONSDOUBLECIEN",$1,0,0);	addNodeToChilds();}
				| CONSBOOLEAN													{createNewListaChilds(); createNewNode("CONSBOOLEAN",$1,0,0);		addNodeToChilds();}
				| CONSSTRING 													{createNewListaChilds(); createNewNode("CONSSTRING",$1,0,0);		addNodeToChilds();}
				| TNULL															{createNewListaChilds(); createNewNode("TNULL","",0,0);				addNodeToChilds();}
				;

%%

//----------------------------- Funciones -----------------------------

int yyerror(char *s){	
	//printf("\nERROR\n");	
	addError(yylineno,yycolumn,"Sintax error");
	return 1;
}

int main(int argcount, char **argvector)
{
    if (argcount == 2)
    {
        FILE *myfile = fopen(argvector[1], "r");
	    if (!myfile) {
		    cout << "No se puede leer el archivo con código o no existe" << endl;
		    return -1;
	    }
	    yyin = myfile;
    }
    else{
        yyin=stdin;
    }
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

void addBlankToChilds(){		
	pNodeParseTree nodonull = new NodeParseTree("<Sin hijos>","",0,0);
	listChildsToAdd.at(listChildsToAdd.size()-1).push_back(nodonull);
}

void addNodeToChilds(){							
		listChildsToAdd.at(listChildsToAdd.size()-1).push_back(nodo);
}	

void addChildsToNode(int offset){		
	int position = (listChildsToAdd.size()-2)-offset;
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
	for(int i=root->childs.size()-1;i>=0;i--)
    {
		//SI funciona
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
