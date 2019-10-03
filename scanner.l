%option noyywrap
%{
    #include "funciones.h"
    int lineNum =0;
    int columnNum =0;
%}
CLASS class
VOID void
STRING string
THIS this
WHILE while
BREAK break
READINTEGER ReadInteger
INT int
EXTENDS extends
IF if
NEW New
READLINE ReadLine
DOUBLE double
INTERFACE interface
IMPLEMENTS implements
ELSE else
NEWARRAY NewArray
TRUE true
BOOL bool
NULL null
FOR for
RETURN return
PRINT Print
FALSE false
ID [a-zA-Z]{1}[a-zA-Z|0-9|_]{0,30}
CONSINTEGERDEC [0-9]+
CONSINTEGERHEX 0[xX][a-fA-F0-9]+
CONSDOUBLEDEC [0-9]+.[0-9]+
CONSDOUBLECIEN [0-9]+.[Ee](([+]{0,1})|-)[0-9]+
CONSBOOLEAN [True|False]
LINECOMMENT "//"[^\n]*
OPERATOR "+"|"-"|"*"|"/"|"%"|"<"|"<="|">"|">="|"="|"=="|"!="|"&&"|"||"|"!"|";"|","|"."|"["|"]"|"("|")"|"{"|"}"
BLANKSPACE [ ]+
LINEBREAK \n
TAB \t

%%
{CLASS} {agregarfila(1,1,"CLASS"," ");}
{VOID} {printf("Tipo: KEYWORD\n");}
{STRING} {printf("Tipo: KEYWORD\n");}
{THIS} {printf("Tipo: KEYWORD\n");}
{WHILE} {printf("Tipo: KEYWORD\n");}
{BREAK} {printf("Tipo: KEYWORD\n");}
{READINTEGER} {printf("Tipo: KEYWORD\n");}
{INT} {printf("Tipo: KEYWORD\n");}
{EXTENDS} {printf("Tipo: KEYWORD\n");}
{IF} {printf("Tipo: KEYWORD\n");}
{NEW} {printf("Tipo: KEYWORD\n");}
{READLINE} {printf("Tipo: KEYWORD\n");}
{DOUBLE} {printf("Tipo: KEYWORD\n");}
{INTERFACE} {printf("Tipo: KEYWORD\n");}
{IMPLEMENTS} {printf("Tipo: KEYWORD\n");}
{ELSE} {printf("Tipo: KEYWORD\n");}
{NEWARRAY} {printf("Tipo: KEYWORD\n");}
{TRUE} {printf("Tipo: KEYWORD\n");}
{BOOL} {printf("Tipo: KEYWORD\n");}
{NULL} {printf("Tipo: KEYWORD\n");}
{FOR} {printf("Tipo: KEYWORD\n");}
{RETURN} {printf("Tipo: KEYWORD\n");}
{PRINT} {printf("Tipo: KEYWORD\n");}
{FALSE} {printf("Tipo: KEYWORD\n");}
{ID}    {printf("Tipo: Identificador\n");}
{CONSINTEGERHEX}    {printf("Tipo: INTEGER HEXADECIMAL\n");}
{CONSINTEGERDEC}    {printf("Tipo: INTEGER DECIMAL\n");}
{CONSBOOLEAN} {printf("Tipo: BOOLEAN\n");}
{CONSDOUBLEDEC} {printf("Tipo: DOUBLE DECIMAL\n");}
{CONSDOUBLECIEN} {printf("Tipo: DOUBLE CIENTIFIC\n");}
{LINECOMMENT} {printf("Tipo: SINGLE COMMENT\n");}
{LINEBREAK} {lineNum++;}
{BLANKSPACE} /*Ignorar espacios en blanco*/
{OPERATOR} {printf("Tipo: OPERATORS\n");}
{TAB} /*Ignorar tabs*/

%%
int main(){
    yylex();
}
