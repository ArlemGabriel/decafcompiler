%{
//----------------------------- Declaraciones -----------------------------
#include <iostream>
#include "funcionesParser.h"
using namespace std;
int contNodos=0;
typedef NodeParseTree * pNodeParseTree;

pNodeParseTree nodo0 = new NodeParseTree();
pNodeParseTree nodo1 = new NodeParseTree();
pNodeParseTree nodo2 = new NodeParseTree();

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

%left COMMA
%left EQUAL 
%left AND
%left OR
%left EEQUAL LESSTHAN LESSEQUALTHAN GREATEREQUALTHAN GREATERTHAN DISTINCT
%left SUM SUBTRACTION
%left MULTIPLICATION DIVISION MODULE
%left LBRACKET LPAREN LBRACE
%left VOID CLASS ID

%%
//----------------------------- Producciones -----------------------------
Program			: Decl	{cout << "Program";}		
				;
		
Decl 			: VariableDecl OtraDecl		{cout << "Decl 1\n";}		
				| FunctionDecl OtraDecl		{cout << "Decl 2\n";}		
				| ClassDecl OtraDecl		{cout << "Decl 3\n";}		
				| InterfaceDecl OtraDecl	{cout << "Decl 4\n";}		
				;

OtraDecl		: Decl OtraDecl				{cout << "OtraDecl\n";}		
				|							
				;

VariableDecl 	: Variable SEMICOLON		{cout << "VariableDecl\n";}		
				;

Variable 		: Type ID				{cout << "Variable\n";}		
				;

Type 			: INT			{cout << "Type int\n";}		
				| DOUBLE		{cout << "Type double\n";}		
				| BOOL			{cout << "Type bool\n";}		
				| STRING		{printf("Type string\n");}		
				| ID			{cout << "Type id\n";}		
				| Type LBRACKET RBRACKET	{cout << "Type ()\n";}		
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock	{cout << "FunctionDecl\n";}		
				| VOID ID LPAREN Formals RPAREN StmtBlock	{cout << "FunctionDecl\n";}		
				;

Formals 		: Variable FormalsVars	{cout << "Formals\n";}
				|
				;

FormalsVars		: COMMA Variable FormalsVars	{cout << "FormalsVars\n";}
				|
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE	{cout << "ClassDecl\n";}
				;

ExtendDecl		: EXTENDS ID	{cout << "ExtendDecl\n";}
				|
				;

ImplementsDecl	: IMPLEMENTS ID OtroID	{cout << "ImplementsDecl\n";}
				|
				;

OtroID			: COMMA ID OtroID	{cout << "OtroID\n";}
				|
				;

Field 			: VariableDecl Field	{cout << "Field\n";}
				| FunctionDecl Field	{cout << "Field\n";}
				|
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE	{cout << "InterfaceDecl\n";}
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype	{cout << "Prototype\n";}
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype	{cout << "Prototype\n";}
				|
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE	{cout << "StmtBlock\n";}
				;

BlockVariables	: VariableDecl BlockVariables	{cout << "BlockVariables\n";}
				|
				;

BlockStmts		: Stmt BlockStmts	{cout << "BlockStmts\n";}
				|
				;

Stmt 			: ExprOpcional SEMICOLON	{cout << "Stmt\n";}
				| IfStmt					{cout << "Stmt\n";}
				| WhileStmt					{cout << "Stmt\n";}
				| ForStmt					{cout << "Stmt\n";}
				| BreakStmt					{cout << "Stmt\n";}
				| ReturnStmt				{cout << "Stmt\n";}
				| PrintStmt					{cout << "Stmt\n";}
				| StmtBlock					{cout << "Stmt\n";}
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt	{cout << "IfStmt\n";}
				;

ElseStmt		: ELSE Stmt	{cout << "ElseStmt\n";}
				|
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt	{cout << "WhileStmt\n";}
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt	{cout << "ForStmt\n";}
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON	{cout << "ReturnStmt\n";}
				;

BreakStmt 		: BREAK SEMICOLON	{cout << "BreakStmt\n";}
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON	{cout << "PrintStmt\n";}
				;

OtraExpr		: COMMA Expr OtraExpr	{cout << "OtraExpr\n";}
				|
				;

ExprOpcional	: Expr	{cout << "ExprOpcional\n";}
				|
				;

Expr 			: LValue EQUAL Expr	{cout << "Expr\n";}
				| Constant			{cout << "Expr\n";}	
				| LValue	{cout << "Expr\n";}
				| THIS		{cout << "Expr\n";}
				| Call		{cout << "Expr\n";}
				| LPAREN Expr RPAREN	{cout << "Expr\n";}
				| Expr SUM Expr		{cout << "Expr\n";}
				| Expr SUBTRACTION Expr	{cout << "Expr\n";}
				| Expr MULTIPLICATION Expr	{cout << "Expr\n";}
				| Expr DIVISION Expr	{cout << "Expr\n";}
				| Expr MODULE Expr	{cout << "Expr\n";}
				| SUBTRACTION Expr	{cout << "Expr\n";}
				| Expr LESSTHAN Expr	{cout << "Expr\n";}
				| Expr LESSEQUALTHAN Expr	{cout << "Expr\n";}
				| Expr GREATERTHAN Expr	{cout << "Expr\n";}
				| Expr GREATEREQUALTHAN Expr	{cout << "Expr\n";}
				| Expr EEQUAL Expr	{cout << "Expr\n";}
				| Expr DISTINCT Expr	{cout << "Expr\n";}
				| Expr AND Expr	{cout << "Expr\n";}
				| Expr OR Expr	{cout << "Expr\n";}
				| NEGATION Expr	{cout << "Expr\n";}
				| READINTEGER LPAREN RPAREN	{cout << "Expr\n";}
				| READLINE LPAREN RPAREN	{cout << "Expr\n";}
				| NEW LPAREN ID RPAREN	{cout << "Expr\n";}
				| NEWARRAY LPAREN Expr COMMA Type RPAREN	{cout << "Expr\n";}
				;
				
LValue 			: ID {cout << "LValue\n";}
				| Expr DOT ID 	{cout << "LValue\n";}
				| Expr LBRACKET Expr RBRACKET	{cout << "LValue\n";}
				;

Call 			: ID LPAREN Actuals RPAREN	{cout << "Call\n";}
				| Expr DOT ID LPAREN Actuals RPAREN	{cout << "Call\n";}
				;

Actuals 		: Expr OtraExpr	{cout << "Actuals\n";}
				|
				;

Constant 		: CONSINTEGERDEC	{cout << "Constant\n";}
				| CONSINTEGERHEX	{cout << "Constant\n";}
				| CONSDOUBLEDEC		{cout << "Constant\n";}
				| CONSDOUBLECIEN 	{cout << "Constant\n";}
				| CONSBOOLEAN		{cout << "Constant\n";}
				| CONSSTRING 		{cout << "Constant\n";}
				| TNULL				{cout << "Constant\n";}
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