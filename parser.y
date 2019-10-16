%{
//----------------------------- Declaraciones -----------------------------
#include <iostream>
using namespace std;

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

%%
//----------------------------- Producciones -----------------------------
Program			: Decl	{cout << "Program";}		
				;
		
Decl 			: VariableDecl OtraDecl		{cout << "Decl 1";}		
				| FunctionDecl OtraDecl		{cout << "Decl 2";}		
				| ClassDecl OtraDecl		{cout << "Decl 3";}		
				| InterfaceDecl OtraDecl	{cout << "Decl 4";}		
				;

OtraDecl		: Decl OtraDecl				{cout << "OtraDecl";}		
				|							
				;

VariableDecl 	: Variable SEMICOLON		{cout << "VariableDecl";}		
				;

Variable 		: Type ID				{cout << "Variable";}		
				;

Type 			: INT			{cout << "Type int";}		
				| DOUBLE		{cout << "Type double";}		
				| BOOL			{cout << "Type bool";}		
				| STRING		{cout << "Type string";}		
				| ID			{cout << "Type id";}		
				| Type LBRACKET RBRACKET	{cout << "Type ()";}		
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock	{cout << "FunctionDecl";}		
				| VOID ID LPAREN Formals RPAREN StmtBlock	{cout << "FunctionDecl";}		
				;

Formals 		: Variable FormalsVars	{cout << "Formals";}
				|
				;

FormalsVars		: COMMA Variable FormalsVars	{cout << "FormalsVars";}
				|
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE	{cout << "ClassDecl";}
				;

ExtendDecl		: EXTENDS ID	{cout << "ExtendDecl";}
				|
				;

ImplementsDecl	: IMPLEMENTS ID OtroID	{cout << "ImplementsDecl";}
				|
				;

OtroID			: COMMA ID OtroID	{cout << "OtroID";}
				|
				;

Field 			: VariableDecl Field	{cout << "Field";}
				| FunctionDecl Field	{cout << "Field";}
				|
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE	{cout << "InterfaceDecl";}
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype	{cout << "Prototype";}
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype	{cout << "Prototype";}
				|
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE	{cout << "StmtBlock";}
				;

BlockVariables	: VariableDecl BlockVariables	{cout << "BlockVariables";}
				|
				;

BlockStmts		: Stmt BlockStmts	{cout << "BlockStmts";}
				|
				;

Stmt 			: ExprOpcional SEMICOLON	{cout << "Stmt";}
				| IfStmt					{cout << "Stmt";}
				| WhileStmt					{cout << "Stmt";}
				| ForStmt					{cout << "Stmt";}
				| BreakStmt					{cout << "Stmt";}
				| ReturnStmt				{cout << "Stmt";}
				| PrintStmt					{cout << "Stmt";}
				| StmtBlock					{cout << "Stmt";}
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt	{cout << "IfStmt";}
				;

ElseStmt		: ELSE Stmt	{cout << "ElseStmt";}
				|
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt	{cout << "WhileStmt";}
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt	{cout << "ForStmt";}
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON	{cout << "ReturnStmt";}
				;

BreakStmt 		: BREAK SEMICOLON	{cout << "BreakStmt";}
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON	{cout << "PrintStmt";}
				;

OtraExpr		: COMMA Expr OtraExpr	{cout << "OtraExpr";}
				|
				;

ExprOpcional	: Expr	{cout << "ExprOpcional";}
				|
				;

Expr 			: LValue EQUAL Expr	{cout << "Expr";}
				| Constant			{cout << "Expr";}	
				| LValue	{cout << "Expr";}
				| THIS		{cout << "Expr";}
				| Call		{cout << "Expr";}
				| LPAREN Expr RPAREN	{cout << "Expr";}
				| Expr SUM Expr		{cout << "Expr";}
				| Expr SUBTRACTION Expr	{cout << "Expr";}
				| Expr MULTIPLICATION Expr	{cout << "Expr";}
				| Expr DIVISION Expr	{cout << "Expr";}
				| Expr MODULE Expr	{cout << "Expr";}
				| SUBTRACTION Expr	{cout << "Expr";}
				| Expr LESSTHAN Expr	{cout << "Expr";}
				| Expr LESSEQUALTHAN Expr	{cout << "Expr";}
				| Expr GREATERTHAN Expr	{cout << "Expr";}
				| Expr GREATEREQUALTHAN Expr	{cout << "Expr";}
				| Expr EEQUAL Expr	{cout << "Expr";}
				| Expr DISTINCT Expr	{cout << "Expr";}
				| Expr AND Expr	{cout << "Expr";}
				| Expr OR Expr	{cout << "Expr";}
				| NEGATION Expr	{cout << "Expr";}
				| READINTEGER LPAREN RPAREN	{cout << "Expr";}
				| READLINE LPAREN RPAREN	{cout << "Expr";}
				| NEW LPAREN ID RPAREN	{cout << "Expr";}
				| NEWARRAY LPAREN Expr COMMA Type RPAREN	{cout << "Expr";}
				;
				
LValue 			: ID {cout << "LValue";}
				| Expr DOT ID 	{cout << "LValue";}
				| Expr LBRACKET Expr RBRACKET	{cout << "LValue";}
				;

Call 			: ID LPAREN Actuals RPAREN	{cout << "Call";}
				| Expr DOT ID LPAREN Actuals RPAREN	{cout << "Call";}
				;

Actuals 		: Expr OtraExpr	{cout << "Actuals";}
				|
				;

Constant 		: CONSINTEGERDEC	{cout << "Constant";}
				| CONSINTEGERHEX	{cout << "Constant";}
				| CONSDOUBLEDEC		{cout << "Constant";}
				| CONSDOUBLECIEN 	{cout << "Constant";}
				| CONSBOOLEAN		{cout << "Constant";}
				| CONSSTRING 		{cout << "Constant";}
				| TNULL				{cout << "Constant";}
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