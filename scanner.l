%option noyywrap
%option yylineno
%option yyalloc
%{
    #include "funciones.h"
    int yycolumn = 1;
%}
ESCAPEERROR \"[^"\\\n]*((?:\\[^nt"][^"\\]*)|(?:\\\\[^"\\\n]*))*\"
LQUOTEERROR [^"\\]*((?:\\[nt"][^"\\]*)|(?:\\\\[^"\\]*))*\"$
RQUOTEERROR \"[^"\\]*((?:\\[nt"][^"\\]*)|(?:\\\\[^"\\]*))*$
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
CONSSTRING \"[^"\\\n]*((?:\\[nt"][^"\\]*)|(?:\\\\[^"\\\n]*))*\"
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
INVALIDCHAR [.]*
%%
{CLASS} {addRow(yylineno,yycolumn,"CLASS","");yycolumn+=yyleng;}
{VOID} {addRow(yylineno,yycolumn,"VOID","");yycolumn+=yyleng;}
{STRING} {addRow(yylineno,yycolumn,"STRING","");yycolumn+=yyleng;}
{THIS} {addRow(yylineno,yycolumn,"THIS","");yycolumn+=yyleng;}
{WHILE} {addRow(yylineno,yycolumn,"WHILE","");yycolumn+=yyleng;}
{BREAK} {addRow(yylineno,yycolumn,"BREAK","");yycolumn+=yyleng;}
{READINTEGER} {addRow(yylineno,yycolumn,"READINTEGER","");yycolumn+=yyleng;}
{INT} {addRow(yylineno,yycolumn,"INT","");yycolumn+=yyleng;}
{EXTENDS} {addRow(yylineno,yycolumn,"EXTENDS","");yycolumn+=yyleng;}
{IF} {addRow(yylineno,yycolumn,"IF","");yycolumn+=yyleng;}
{NEW} {addRow(yylineno,yycolumn,"NEW","");yycolumn+=yyleng;}
{READLINE} {addRow(yylineno,yycolumn,"READLINE","");yycolumn+=yyleng;}
{DOUBLE} {addRow(yylineno,yycolumn,"DOUBLE","");yycolumn+=yyleng;}
{INTERFACE} {addRow(yylineno,yycolumn,"INTERFACE","");yycolumn+=yyleng;}
{IMPLEMENTS} {addRow(yylineno,yycolumn,"IMPLEMENTS","");yycolumn+=yyleng;}
{ELSE} {addRow(yylineno,yycolumn,"ELSE","");yycolumn+=yyleng;}
{NEWARRAY} {addRow(yylineno,yycolumn,"NEWARRAY","");yycolumn+=yyleng;}
{TRUE} {addRow(yylineno,yycolumn,"TRUE","");yycolumn+=yyleng;}
{BOOL} {addRow(yylineno,yycolumn,"BOOL","");yycolumn+=yyleng;}
{NULL} {addRow(yylineno,yycolumn,"NULL","");yycolumn+=yyleng;}
{FOR} {addRow(yylineno,yycolumn,"FOR","");yycolumn+=yyleng;}
{RETURN} {addRow(yylineno,yycolumn,"RETURN","");yycolumn+=yyleng;}
{PRINT} {addRow(yylineno,yycolumn,"PRINT","");yycolumn+=yyleng;}
{FALSE} {addRow(yylineno,yycolumn,"FALSE","");yycolumn+=yyleng;}
{ID}    {addRow(yylineno,yycolumn,"ID",yytext);yycolumn+=yyleng;}
{CONSINTEGERHEX}    {addRow(yylineno,yycolumn,"HINTEGER",yytext);yycolumn+=yyleng;}
{CONSINTEGERDEC}    {addRow(yylineno,yycolumn,"DINTEGER",yytext);yycolumn+=yyleng;}
{CONSBOOLEAN} {addRow(yylineno,yycolumn,"BOOLEAN",yytext);yycolumn+=yyleng;}
{CONSDOUBLEDEC} {addRow(yylineno,yycolumn,"DDOUBLE",yytext);yycolumn+=yyleng;}
{CONSDOUBLECIEN} {addRow(yylineno,yycolumn,"CDOUBLE",yytext);yycolumn+=yyleng;}
{CONSSTRING} {addRow(yylineno,yycolumn,"CSTRING",yytext);yycolumn+=yyleng;}
{MULTICOMMENT} {addRow(yylineno,yycolumn,"MCOMMENT",yytext);yycolumn+=yyleng;}
{SINGLECOMMENT} {addRow(yylineno,yycolumn,"SCOMMENT",yytext);yycolumn+=yyleng;}
{SUM} {addRow(yylineno,yycolumn,"SUM","");yycolumn+=yyleng;}
{SUBTRACTION} {addRow(yylineno,yycolumn,"SUBTRACTION","");yycolumn+=yyleng;}
{MULTIPLICATION} {addRow(yylineno,yycolumn,"MULTIPLICATION","");yycolumn+=yyleng;}
{DIVISION} {addRow(yylineno,yycolumn,"DIVISION","");yycolumn+=yyleng;}
{MODULE} {addRow(yylineno,yycolumn,"MODULE","");yycolumn+=yyleng;}
{LESSTHAN} {addRow(yylineno,yycolumn,"LESSTHAN","");yycolumn+=yyleng;}
{LESSEQUALTHAN} {addRow(yylineno,yycolumn,"LESSEQTHAN","");yycolumn+=yyleng;}
{GREATERTHAN} {addRow(yylineno,yycolumn,"GREATERTHAN","");yycolumn+=yyleng;}
{GREATEREQUALTHAN} {addRow(yylineno,yycolumn,"GREATEREQTHAN","");yycolumn+=yyleng;}
{EQUAL} {addRow(yylineno,yycolumn,"EQUAL","");yycolumn+=yyleng;}
{EEQUAL} {addRow(yylineno,yycolumn,"EEQUAL","");yycolumn+=yyleng;}
{DISTINCT} {addRow(yylineno,yycolumn,"DISTINCT","");yycolumn+=yyleng;}
{AND} {addRow(yylineno,yycolumn,"AND","");yycolumn+=yyleng;}
{OR} {addRow(yylineno,yycolumn,"OR","");yycolumn+=yyleng;}
{NEGATION} {addRow(yylineno,yycolumn,"NEGATION","");yycolumn+=yyleng;}
{SEMICOLON} {addRow(yylineno,yycolumn,"SEMICOLON","");yycolumn+=yyleng;}
{COMMA} {addRow(yylineno,yycolumn,"COMMA","");yycolumn+=yyleng;}
{DOT} {addRow(yylineno,yycolumn,"DOT","");yycolumn+=yyleng;}
{LBRACKET} {addRow(yylineno,yycolumn,"LBRACKET","");yycolumn+=yyleng;}
{RBRACKET} {addRow(yylineno,yycolumn,"RBRACKET","");yycolumn+=yyleng;}
{LPAREN} {addRow(yylineno,yycolumn,"LPAREN","");yycolumn+=yyleng;}
{RPAREN} {addRow(yylineno,yycolumn,"RPAREN","");yycolumn+=yyleng;}
{LBRACE} {addRow(yylineno,yycolumn,"LBRACE","");yycolumn+=yyleng;}
{RBRACE} {addRow(yylineno,yycolumn,"RBRACE","");yycolumn+=yyleng;}
{ESCAPEERROR} {addError(yylineno,yycolumn,"Invalid scape secuence");}
{LQUOTEERROR} {addError(yylineno,yycolumn,"Missing left quote");}
{RQUOTEERROR} {addError(yylineno,yycolumn,"Missing right quote");}
{LINEBREAK} {yycolumn=1;}
{BLANKSPACE} {yycolumn+=1;}
{TAB} {yycolumn+=1;}
.   addError(yylineno,yycolumn,"Invalid character");

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
    printTable();
}
