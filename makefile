
compilador:
    lex.yy.o y.tab.o
    g++ compilador lex.yy.o y.tab.o

lex.yy.c:
    compilador.l y.tab.c
    flex compilador.l

y.tab.c:
    bison -d compilador.y
