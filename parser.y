%{
//----------------------------- Declaraciones -----------------------------
}%

//----------------------------- Definiciones -----------------------------
//Palabras reservadas
%token CLASS VOID STRING THIS WHILE BREAK READINTEGER INT EXTENDS IF NEW READLINE DOUBLE INTERFACE
%token IMPLEMENTS ELSE NEWARRAY TRUE BOOL NULL FOR RETURN PRINT FALSE

//Datos
%token ID CONSINTEGERDEC CONSINTEGERHEX CONSDOUBLEDEC CONSDOUBLECIEN CONSSTRING CONSBOOLEAN

//Operadores
//      +       -             *           /       %       <          <=            >           >=
%token SUM SUBTRACTION MULTIPLICATION DIVISION MODULE LESSTHAN LESSEQUALTHAN GREATERTHAN GREATEREQUALTHAN
//       =     ==       !=    && ||     !        ;       ,    .      [        ]       (     )
%token EQUAL EEQUAL DISTINCT AND OR NEGATION SEMICOLON COMMA DOT LBRACKET RBRACKET LPAREN RPAREN
//        {     }
%token LBRACE RBRACE

%%
//----------------------------- Producciones -----------------------------
Program			: Decl
				;
		
Decl 			: VariableDecl OtraDecl
				| FunctionDecl OtraDecl
				| ClassDecl OtraDecl
				| InterfaceDecl OtraDecl
				;

OtraDecl		: Decl OtraDecl
				|
				;

VariableDecl 	: Variable SEMICOLON
				;

Variable 		: Type ID
				;

Type 			: INT
				| DOUBLE
				| BOOL
				| STRING
				| ID
				| Type LBRACKET RBRACKET
				;

FunctionDecl 	: Type ID LPAREN Formals RPAREN StmtBlock
				| VOID ID LPAREN Formals RPAREN StmtBlock
				;

Formals 		: Variable FormalsVars
				|
				;

FormalsVars		: COMMA Variable FormalsVars
				|
				;

ClassDecl 		: CLASS ID ExtendDecl ImplementsDecl LBRACE Field RBRACE
				;

ExtendDecl		: EXTENDS ID
				|
				;

ImplementsDecl	: IMPLEMENTS ID OtroID
				|
				;

OtroID			: COMMA ID OtroID
				|
				;

Field 			: VariableDecl Field
				| FunctionDecl Field
				|
				;

InterfaceDecl	: INTERFACE ID LBRACE Prototype RBRACE
				;

Prototype 		: Type ID LPAREN Formals RPAREN SEMICOLON Prototype
				| VOID ID LPAREN Formals RPAREN SEMICOLON Prototype
				|
				;

StmtBlock 		: LBRACE BlockVariables BlockStmts RBRACE
				;

BlockVariables	: VariableDecl BlockVariables
				|
				;

BlockStmts		: Stmt BlockStmts
				|
				;

Stmt 			: ExprOpcional SEMICOLON Stmt
				| IfStmt Stmt
				| WhileStmt Stmt
				| ForStmt Stmt
				| BreakStmt Stmt
				| ReturnStmt Stmt
				| PrintStmt Stmt
				| StmtBlock Stmt
				;

IfStmt 			: IF LPAREN Expr RPAREN Stmt ElseStmt
				;

ElseStmt		: ELSE Stmt
				|
				;

WhileStmt 		: WHILE LPAREN Expr RPAREN Stmt
				;

ForStmt 		: FOR LPAREN ExprOpcional SEMICOLON ExprOpcional SEMICOLON ExprOpcional RPAREN Stmt
				;

ReturnStmt 		: RETURN ExprOpcional SEMICOLON
				;

BreakStmt 		: BREAK SEMICOLON
				;

PrintStmt 		: PRINT LPAREN Expr OtraExpr RPAREN SEMICOLON
				;

OtraExpr		: COMMA Expr OtraExpr
				|
				;

ExprOpcional	: Expr
				|
				;

Expr 			: LValue EQUAL Expr
				| Constant
				| LValue
				| THIS
				| Call
				| LPAREN Expr RPAREN
				| Expr SUM Expr
				| Expr SUBTRACTION Expr
				| Expr MULTIPLICATION Expr
				| Expr DIVISION Expr
				| Expr MODULE Expr
				| SUBTRACTION Expr
				| Expr LESSTHAN Expr
				| Expr LESSEQUALTHAN Expr
				| Expr GREATERTHAN Expr
				| Expr GREATEREQUALTHAN Expr
				| Expr EEQUAL Expr
				| Expr DISTINCT Expr
				| Expr AND Expr
				| Expr OR Expr
				| NEGATION Expr
				| READINTEGER LPAREN RPAREN
				| READLINE LPAREN RPAREN
				| NEW LPAREN ID RPAREN
				| NEWARRAY LPAREN Expr COMMA Type RPAREN
				;
				
LValue 			: ID 
				| Expr DOT ID 
				| Expr LBRACKET Expr RBRACKET
				;

Call 			: ID LPAREN Actuals RPAREN
				| Expr DOT ID LPAREN Actuals RPAREN
				;

Actuals 		: Expr OtraExpr
				|
				;

Constant 		: CONSINTEGERDEC
				| CONSINTEGERHEX
				| CONSDOUBLEDEC
				| CONSDOUBLECIEN 
				| CONSBOOLEAN
				| CONSSTRING 
				| NULL
				;

%%

//----------------------------- Funciones -----------------------------

int main {}