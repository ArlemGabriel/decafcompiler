%option noyywrap
%{
    #include "funciones.h"
    int lineNum =0;
    int posNum =0;
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
INTEGERDEC [0-9]+
INTEGERHEX 0[xX][a-fA-F0-9]+
DOUBLEDEC [0-9]+.[0-9]+
DOUBLECIEN [0-9]+.[Ee](([+]{0,1})|-)[0-9]+
BLANKSPACE [ ]+
LINEBREAK \n
TAB \t
BOOLEAN [True|False]
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
{INTEGERHEX}    {printf("Tipo: INTEGER HEXADECIMAL\n");}
{INTEGERDEC}    {printf("Tipo: INTEGER DECIMAL\n");}
{BOOLEAN} {printf("Tipo: BOOLEAN\n");}
{DOUBLEDEC} {printf("Tipo: DOUBLE DECIMALn");}
{DOUBLECIEN} {printf("Tipo: DOUBLE CIENTIFIC\n");}
{LINEBREAK} {lineNum++;}
{BLANKSPACE} /*Ignorar espacios en blanco*/
{TAB} /*Ignorar tabs*/

%%
int main(){
    yylex();
}
