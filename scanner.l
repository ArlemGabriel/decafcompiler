%option noyywrap
%{
int rowNum =0;
%}
CLASS ^class$
VOID ^void$
STRING ^string$
THIS ^this$
WHILE ^while$
BREAK ^break$
READINTEGER ^ReadInteger$
INT ^int$
EXTENDS ^extends$
IF ^if$
NEW ^New$
READLINE ^ReadLine$
DOUBLE ^double$
INTERFACE ^interface$
IMPLEMENTS ^implements$
ELSE ^else$
NEWARRAY ^NewArray$
TRUE ^true$
BOOL ^bool$
NULL ^null$
FOR ^for$
RETURN ^return$
PRINT ^Print$
FALSE ^false$
ID ^[a-zA-Z]{1}[a-zA-Z|0-9|_]{0,30}$
%%
{CLASS} {printf("Tipo: KEYWORD");}
{VOID} {printf("Tipo: KEYWORD");}
{STRING} {printf("Tipo: KEYWORD");}
{THIS} {printf("Tipo: KEYWORD");}
{WHILE} {printf("Tipo: KEYWORD");}
{BREAK} {printf("Tipo: KEYWORD");}
{READINTEGER} {printf("Tipo: KEYWORD");}
{INT} {printf("Tipo: KEYWORD");}
{EXTENDS} {printf("Tipo: KEYWORD");}
{IF} {printf("Tipo: KEYWORD");}
{NEW} {printf("Tipo: KEYWORD");}
{READLINE} {printf("Tipo: KEYWORD");}
{DOUBLE} {printf("Tipo: KEYWORD");}
{INTERFACE} {printf("Tipo: KEYWORD");}
{IMPLEMENTS} {printf("Tipo: KEYWORD");}
{ELSE} {printf("Tipo: KEYWORD");}
{NEWARRAY} {printf("Tipo: KEYWORD");}
{TRUE} {printf("Tipo: KEYWORD");}
{BOOL} {printf("Tipo: KEYWORD");}
{NULL} {printf("Tipo: KEYWORD");}
{FOR} {printf("Tipo: KEYWORD");}
{RETURN} {printf("Tipo: KEYWORD");}
{PRINT} {printf("Tipo: KEYWORD");}
{FALSE} {printf("Tipo: KEYWORD");}
{ID}    {printf("Tipo: Identificador");}
%%
int main(){
    yylex();
}
