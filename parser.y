%{
//----------------------------- Declaraciones -----------------------------
#include <iostream>
#include "funcionesParser.h"
using namespace std;

typedef NodeParseTree * pNodeParseTree;
int contNodos=0;


pNodeParseTree nodo = new NodeParseTree();
std::vector<pNodeParseTree> childsToAdd;
void createNewNode(string pToken, string pValue, int pRow, int pColumn);
void addNodeToChilds();
void addChildsToNode();


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
Program			: Decl															{cout << "Program\n"; createNewNode("Program","\"No Value\"",0,0);			addChildsToNode();}		
				;
		
Decl 			: VariableDecl OtraDecl											{cout << "Decl 1\n"; createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}		
				| FunctionDecl OtraDecl											{cout << "Decl 2\n"; createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}		
				| ClassDecl OtraDecl											{cout << "Decl 3\n"; createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}		
				| InterfaceDecl OtraDecl										{cout << "Decl 4\n"; createNewNode("Decl","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}		
				;

OtraDecl		: Decl OtraDecl													{cout << "OtraDecl\n"; createNewNode("OtraDecl","\"No Value\"",0,0); 		addChildsToNode();		addNodeToChilds();}		
				|																%prec EQUAL
				;

VariableDecl 	: Variable SEMICOLON											{cout << "VariableDecl\n"; createNewNode("VariableDecl","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();}		
				;							

Variable 		: Type ID														{printf("Variable %s\n",$1);createNewNode("Variable","\"No Value\"",0,0); 	addChildsToNode();		addNodeToChilds();}		
				;

Type 			: INT															{printf("Type int\n");createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}		
				| DOUBLE														{cout << "Type double\n";createNewNode("Type","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}		
				| BOOL															{cout << "Type bool\n";createNewNode("Type","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| STRING														{printf("Type string\n");createNewNode("Type","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| ID															{cout << "Type id\n";createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				| Type LBRACKET RBRACKET										{cout << "Type ()\n";createNewNode("Type","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock						{cout << "FunctionDecl\n";createNewNode("FunctionDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN StmtBlock						{cout << "FunctionDecl\n";createNewNode("FunctionDecl","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();}
				;

Formals 		: Variable FormalsVars											{cout << "Formals\n";createNewNode("Formals","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

FormalsVars		: COMMA Variable FormalsVars									{cout << "FormalsVars\n";createNewNode("FormalsVars","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE		{cout << "ClassDecl\n";createNewNode("ClassDecl","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

ExtendDecl		: EXTENDS ID													{cout << "ExtendDecl\n";createNewNode("ExtendDecl","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL	
				;

ImplementsDecl	: IMPLEMENTS ID OtroID											{cout << "ImplementsDecl\n";createNewNode("ImplementsDecl","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL		
				;

OtroID			: COMMA ID OtroID												{cout << "OtroID\n";createNewNode("OtroID","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

Field 			: VariableDecl Field											{cout << "Field\n";createNewNode("Field","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				| FunctionDecl Field											{cout << "Field\n";createNewNode("Field","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE							{cout << "InterfaceDecl\n";createNewNode("InterfaceDecl","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();}
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype				{cout << "Prototype\n";createNewNode("Prototype","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype				{cout << "Prototype\n";createNewNode("Prototype","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE						{cout << "StmtBlock\n";createNewNode("StmtBlock","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

BlockVariables	: VariableDecl BlockVariables									{cout << "BlockVariables\n";createNewNode("BlockVariables","\"No Value\"",0,0);addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

BlockStmts		: Stmt BlockStmts												{cout << "BlockStmts\n";createNewNode("BlockStmts","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

Stmt 			: ExprOpcional SEMICOLON										{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| IfStmt														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| WhileStmt														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| ForStmt														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| BreakStmt														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| ReturnStmt													{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| PrintStmt														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| StmtBlock														{cout << "Stmt\n";createNewNode("Stmt","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt							{cout << "IfStmt\n";createNewNode("IfStmt","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				;

ElseStmt		: ELSE Stmt														{cout << "ElseStmt\n";createNewNode("ElseStmt","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt									{cout << "WhileStmt\n";createNewNode("WhileStmt","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt	{cout << "ForStmt\n";createNewNode("ForStmt","\"No Value\"",0,0); addChildsToNode();		addNodeToChilds();}
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON									{cout << "ReturnStmt\n";createNewNode("ReturnStmt","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

BreakStmt 		: BREAK SEMICOLON												{cout << "BreakStmt\n";createNewNode("BreakStmt","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON					{cout << "PrintStmt\n";createNewNode("PrintStmt","\"No Value\"",0,0);		addChildsToNode();		addNodeToChilds();}
				;

OtraExpr		: COMMA Expr OtraExpr											{cout << "OtraExpr\n";createNewNode("OtraExpr","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

ExprOpcional	: Expr															{cout << "ExprOpcional\n";createNewNode("ExprOpcional","\"No Value\"",0,0);	addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

Expr 			: LValue EQUAL Expr												{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Constant														{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}	
				| LValue														{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| THIS															{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Call															{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| LPAREN Expr RPAREN											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr SUM Expr													{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr SUBTRACTION Expr											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr MULTIPLICATION Expr										{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr DIVISION Expr											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr MODULE Expr												{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| SUBTRACTION Expr	%prec NEGATION								{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}		
				| Expr LESSTHAN Expr											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr LESSEQUALTHAN Expr										{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr GREATERTHAN Expr											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr GREATEREQUALTHAN Expr									{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr EEQUAL Expr												{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr DISTINCT Expr											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr AND Expr													{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr OR Expr													{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| NEGATION Expr													{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| READINTEGER LPAREN RPAREN										{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| READLINE LPAREN RPAREN										{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| NEW LPAREN ID RPAREN											{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| NEWARRAY LPAREN Expr COMMA Type RPAREN						{cout << "Expr\n";createNewNode("Expr","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				;
				
LValue 			: ID															{cout << "LValue\n";createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				| Expr DOT ID 													{cout << "LValue\n";createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				| Expr LBRACKET Expr RBRACKET									{cout << "LValue\n";createNewNode("LValue","\"No Value\"",0,0);				addChildsToNode();		addNodeToChilds();}
				;

Call 			: ID LPAREN Actuals RPAREN										{cout << "Call\n";createNewNode("Call","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				| Expr DOT ID LPAREN Actuals RPAREN								{cout << "Call\n";createNewNode("Call","\"No Value\"",0,0);					addChildsToNode();		addNodeToChilds();}
				;

Actuals 		: Expr OtraExpr													{cout << "Actuals\n";createNewNode("Actuals","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				|																%prec EQUAL
				;

Constant 		: CONSINTEGERDEC												{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| CONSINTEGERHEX												{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| CONSDOUBLEDEC													{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| CONSDOUBLECIEN 												{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| CONSBOOLEAN													{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| CONSSTRING 													{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
				| TNULL															{cout << "Constant\n";createNewNode("Constant","\"No Value\"",0,0);			addChildsToNode();		addNodeToChilds();}
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
}



void createNewNode(string pToken, string pValue, int pRow, int pColumn){
	nodo= newNode(pToken, pValue, pRow, pColumn);		
}

void addNodeToChilds(){			
		childsToAdd.push_back(nodo);
}	

void addChildsToNode(){
	for(int i=0;i<childsToAdd.size();i++)
    {
		pNodeParseTree child = childsToAdd.at(i);
		nodo->addChild(child);	
	}
	childsToAdd.clear();
}



/*
void createNewNode(string pToken, string pValue, int pRow, int pColumn){
	if(contNodos==0){
		nodo1 = new pNodeParseTree();
		nodo0->addData(pToken, pValue, pRow, pColumn);
		contNodos++;
	}
	else if(contNodos==1){
		nodo2 = new pNodeParseTree();
		nodo1->addData(pToken, pValue, pRow, pColumn);
		contNodos++;
	}
	else{
		nodo0 = new pNodeParseTree();
		nodo2->addData(pToken, pValue, pRow, pColumn);
		contNodos=0;
	}
}

void addChildToLastNode(){
	if(contNodos==0){
		nodo0->addChild(nodo2);		
	}
	else if(contNodos==1){
		nodo1->addChild(nodo0);		
	}
	else{
		nodo2->addChild(nodo1);		
	}
}//*/
/*WIP
void addParentToLastNode(){
	if(contNodos==0){
		nodo0->addParent(nodo1);		
	}
	else{
		nodo1->addParent(nodo0);		
	}
}//*/

