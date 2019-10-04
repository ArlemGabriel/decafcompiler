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
CONSDOUBLECIEN [0-9]+.[0-9]*[Ee](([+]{0,1})|-)[0-9]+
CONSSTRING \"([^"\\\n]*)\"|\"([^"\n]*)\"
CONSBOOLEAN [True|False]
SINGLECOMMENT \/\/[^\n]+
MULTICOMMENT \/\*([^*]|(\*+[^*/]))*\*+\/
SUM "+"
SUBTRACTION "-"
MULTIPLICATION "*"
DIVISION "/"
MODULE "%"
LESSTHAN "<"
LESSEQUALTHAN "<="
GREATERTHAN ">"
GREATEREQUALTHAN ">="
EQUAL "="
EEQUAL "=="
DISTINCT "!="
AND "&&"
OR "||"
NEGATION "!"
SEMICOLON ";"
COMMA ","
DOT "."
LBRACKET "["
RBRACKET "]"
LPAREN "("
RPAREN ")"
LBRACE "{"
RBRACE "}"
BLANKSPACE [ ]+
LINEBREAK \n
TAB \t

%%
{CLASS} {agregarfila(yylineno,yycolumn,"CLASS","");yycolumn+=yyleng;}
{VOID} {agregarfila(yylineno,yycolumn,"VOID","");yycolumn+=yyleng;}
{STRING} {agregarfila(yylineno,yycolumn,"STRING","");yycolumn+=yyleng;}
{THIS} {agregarfila(yylineno,yycolumn,"THIS","");yycolumn+=yyleng;}
{WHILE} {agregarfila(yylineno,yycolumn,"WHILE","");yycolumn+=yyleng;}
{BREAK} {agregarfila(yylineno,yycolumn,"BREAK","");yycolumn+=yyleng;}
{READINTEGER} {agregarfila(yylineno,yycolumn,"READINTEGER","");yycolumn+=yyleng;}
{INT} {agregarfila(yylineno,yycolumn,"INT","");yycolumn+=yyleng;}
{EXTENDS} {agregarfila(yylineno,yycolumn,"EXTENDS","");yycolumn+=yyleng;}
{IF} {agregarfila(yylineno,yycolumn,"IF","");yycolumn+=yyleng;}
{NEW} {agregarfila(yylineno,yycolumn,"NEW","");yycolumn+=yyleng;}
{READLINE} {agregarfila(yylineno,yycolumn,"READLINE","");yycolumn+=yyleng;}
{DOUBLE} {agregarfila(yylineno,yycolumn,"DOUBLE","");yycolumn+=yyleng;}
{INTERFACE} {agregarfila(yylineno,yycolumn,"INTERFACE","");yycolumn+=yyleng;}
{IMPLEMENTS} {agregarfila(yylineno,yycolumn,"IMPLEMENTS","");yycolumn+=yyleng;}
{ELSE} {agregarfila(yylineno,yycolumn,"ELSE","");yycolumn+=yyleng;}
{NEWARRAY} {agregarfila(yylineno,yycolumn,"NEWARRAY","");yycolumn+=yyleng;}
{TRUE} {agregarfila(yylineno,yycolumn,"TRUE","");yycolumn+=yyleng;}
{BOOL} {agregarfila(yylineno,yycolumn,"BOOL","");yycolumn+=yyleng;}
{NULL} {agregarfila(yylineno,yycolumn,"NULL","");yycolumn+=yyleng;}
{FOR} {agregarfila(yylineno,yycolumn,"FOR","");yycolumn+=yyleng;}
{RETURN} {agregarfila(yylineno,yycolumn,"RETURN","");yycolumn+=yyleng;}
{PRINT} {agregarfila(yylineno,yycolumn,"PRINT","");yycolumn+=yyleng;}
{FALSE} {agregarfila(yylineno,yycolumn,"FALSE","");yycolumn+=yyleng;}
{ID}    {agregarfila(yylineno,yycolumn,"ID",yytext);yycolumn+=yyleng;}
{CONSINTEGERHEX}    {agregarfila(yylineno,yycolumn,"HINTEGER",yytext);yycolumn+=yyleng;}
{CONSINTEGERDEC}    {agregarfila(yylineno,yycolumn,"DINTEGER",yytext);yycolumn+=yyleng;}
{CONSBOOLEAN} {agregarfila(yylineno,yycolumn,"BOOLEAN",yytext);yycolumn+=yyleng;}
{CONSDOUBLEDEC} {agregarfila(yylineno,yycolumn,"DDOUBLE",yytext);yycolumn+=yyleng;}
{CONSDOUBLECIEN} {agregarfila(yylineno,yycolumn,"CDOUBLE",yytext);yycolumn+=yyleng;}
{CONSSTRING} {agregarfila(yylineno,yycolumn,"CSTRING",yytext);yycolumn+=yyleng;}
{MULTICOMMENT} {agregarfila(yylineno,yycolumn,"MCOMMENT",yytext);yycolumn+=yyleng;}
{SINGLECOMMENT} {agregarfila(yylineno,yycolumn,"SCOMMENT",yytext);yycolumn+=yyleng;}
{SUM} {agregarfila(yylineno,yycolumn,"SUM","");yycolumn+=yyleng;}
{SUBTRACTION} {agregarfila(yylineno,yycolumn,"SUBTRACTION","");yycolumn+=yyleng;}
{MULTIPLICATION} {agregarfila(yylineno,yycolumn,"MULTIPLICATION","");yycolumn+=yyleng;}
{DIVISION} {agregarfila(yylineno,yycolumn,"DIVISION","");yycolumn+=yyleng;}
{MODULE} {agregarfila(yylineno,yycolumn,"MODULE","");yycolumn+=yyleng;}
{LESSTHAN} {agregarfila(yylineno,yycolumn,"LESSTHAN","");yycolumn+=yyleng;}
{LESSEQUALTHAN} {agregarfila(yylineno,yycolumn,"LESSEQTHAN","");yycolumn+=yyleng;}
{GREATERTHAN} {agregarfila(yylineno,yycolumn,"GREATERTHAN","");yycolumn+=yyleng;}
{GREATEREQUALTHAN} {agregarfila(yylineno,yycolumn,"GREATEREQTHAN","");yycolumn+=yyleng;}
{EQUAL} {agregarfila(yylineno,yycolumn,"EQUAL","");yycolumn+=yyleng;}
{EEQUAL} {agregarfila(yylineno,yycolumn,"EEQUAL","");yycolumn+=yyleng;}
{DISTINCT} {agregarfila(yylineno,yycolumn,"DISTINCT","");yycolumn+=yyleng;}
{AND} {agregarfila(yylineno,yycolumn,"AND","");yycolumn+=yyleng;}
{OR} {agregarfila(yylineno,yycolumn,"OR","");yycolumn+=yyleng;}
{NEGATION} {agregarfila(yylineno,yycolumn,"NEGATION","");yycolumn+=yyleng;}
{SEMICOLON} {agregarfila(yylineno,yycolumn,"SEMICOLON","");yycolumn+=yyleng;}
{COMMA} {agregarfila(yylineno,yycolumn,"COMMA","");yycolumn+=yyleng;}
{DOT} {agregarfila(yylineno,yycolumn,"DOT","");yycolumn+=yyleng;}
{LBRACKET} {agregarfila(yylineno,yycolumn,"LBRACKET","");yycolumn+=yyleng;}
{RBRACKET} {agregarfila(yylineno,yycolumn,"RBRACKET","");yycolumn+=yyleng;}
{LPAREN} {agregarfila(yylineno,yycolumn,"LPAREN","");yycolumn+=yyleng;}
{RPAREN} {agregarfila(yylineno,yycolumn,"RPAREN","");yycolumn+=yyleng;}
{LBRACE} {agregarfila(yylineno,yycolumn,"LBRACE","");yycolumn+=yyleng;}
{RBRACE} {agregarfila(yylineno,yycolumn,"RBRACE","");yycolumn+=yyleng;}
{LINEBREAK} {yycolumn=1;}
{BLANKSPACE} {yycolumn+=1;}
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
    imprimirtabla();
}
