%option noyywrap
%{
int rowNum =0;
%}
CLASS "class"
VOID "void"
STRING "string"
THIS "this"
WHILE "while"
BREAK "break"
READINTEGER "ReadInteger"
INT "int"
EXTENDS "extends"
IF "if"
NEW "new"
READLINE "ReadLine"
DOUBLE "double"
INTERFACE "interface"
IMPLEMENTS "implements"
ELSE "else"
NEWARRAY "NewArray"
TRUE "true"
BOOL "bool"
NULL "null"
FOR "for"
RETURN "return"
PRINT "Print"
FALSE "false"
ID ^[a-zA-Z]{1}[a-zA-Z|0-9|_]{0,30}$
%%
{CLASS}    {printf("Tipo: KEYWORD");}
{ID}    {printf("Tipo: Identificador");}
%%
int main(){
    yylex();
}
