%option noyywrap
%option yylineno
%option yyalloc
%{
    #include "funciones.h"
    int yycolumn = 1;
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
CONSSTRING \"([^"\\\n]*)\"|\"([^"\n]*)\"
CONSBOOLEAN [True|False]
SINGLECOMMENT \/\/[^\n]+
MULTICOMMENT \/\*([^*]|(\*+[^*/]))*\*+\/
OPERATOR "+"|"-"|"*"|"/"|"%"|"<"|"<="|">"|">="|"="|"=="|"!="|"&&"|"||"|"!"|";"|","|"."|"["|"]"|"("|")"|"{"|"}"
BLANKSPACE [ ]+
LINEBREAK \n
TAB \t

%%
{CLASS} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"CLASS",yytext);yycolumn+=yyleng;}
{VOID} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"VOID",yytext);yycolumn+=yyleng;}
{STRING} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"STRING",yytext);yycolumn+=yyleng;}
{THIS} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"THIS",yytext);yycolumn+=yyleng;}
{WHILE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"WHILE",yytext);yycolumn+=yyleng;}
{BREAK} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"BREAK",yytext);yycolumn+=yyleng;}
{READINTEGER} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"READINTEGER",yytext);yycolumn+=yyleng;}
{INT} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"INT",yytext);yycolumn+=yyleng;}
{EXTENDS} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"EXTENDS",yytext);yycolumn+=yyleng;}
{IF} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"IF",yytext);yycolumn+=yyleng;}
{NEW} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"NEW",yytext);yycolumn+=yyleng;}
{READLINE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"READLINE",yytext);yycolumn+=yyleng;}
{DOUBLE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"DOUBLE",yytext);yycolumn+=yyleng;}
{INTERFACE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"INTERFACE",yytext);yycolumn+=yyleng;}
{IMPLEMENTS} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"IMPLEMENTS",yytext);yycolumn+=yyleng;}
{ELSE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"ELSE",yytext);yycolumn+=yyleng;}
{NEWARRAY} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"NEWARRAY",yytext);yycolumn+=yyleng;}
{TRUE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"TRUE",yytext);yycolumn+=yyleng;}
{BOOL} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"BOOL",yytext);yycolumn+=yyleng;}
{NULL} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"NULL",yytext);yycolumn+=yyleng;}
{FOR} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"FOR",yytext);yycolumn+=yyleng;}
{RETURN} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"RETURN",yytext);yycolumn+=yyleng;}
{PRINT} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"PRINT",yytext);yycolumn+=yyleng;}
{FALSE} {printf("Tipo: KEYWORD%d\n",yycolumn);agregarfila(yylineno,yycolumn,"FALSE",yytext);yycolumn+=yyleng;}
{ID}    {printf("Tipo: Identificador%d\n",yycolumn);agregarfila(yylineno,yycolumn,"ID",yytext);yycolumn+=yyleng;}
{CONSINTEGERHEX}    {printf("Tipo: INTEGER HEXADECIMAL\n");}
{CONSINTEGERDEC}    {printf("Tipo: INTEGER DECIMAL%d\n",yycolumn);yycolumn+=yyleng;}
{CONSBOOLEAN} {printf("Tipo: BOOLEAN\n");}
{CONSDOUBLEDEC} {printf("Tipo: DOUBLE DECIMAL%d\n",yycolumn);yycolumn+=yyleng;}
{CONSDOUBLECIEN} {printf("Tipo: DOUBLE CIENTIFIC\n");}
{CONSSTRING} {printf("Tipo: STRING%d\n",yycolumn);agregarfila(yylineno,yycolumn,"CSTRING",yytext);yycolumn+=yyleng;}
{MULTICOMMENT} {printf("Tipo: MULTIPLE LINES COMMENT%d\n",yycolumn);agregarfila(yylineno,yycolumn,"MCOMMENT",yytext);yycolumn+=yyleng;}
{SINGLECOMMENT} {printf("Tipo: SINGLE LINE COMMENT%d\n",yycolumn);agregarfila(yylineno,yycolumn,"SCOMMENT",yytext);yycolumn+=yyleng;}
{LINEBREAK} {yycolumn=1;}
{BLANKSPACE} {yycolumn+=1;}
{OPERATOR} {printf("Tipo: OPERATORS%d\n",yycolumn);agregarfila(yylineno,yycolumn,"OPERATOR",yytext);yycolumn+=yyleng;}
{TAB} {yycolumn+=1;}

%%
int main(int argcount, char **argvector)
{
    if (argcount == 2)
    {
        yyin=fopen(argvector[1],"r");
    }
    else{
        yyin=stdin;
    }
    yylex();
}
