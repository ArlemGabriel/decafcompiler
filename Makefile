
compilador:lex.yy.o y.tab.o
	g++ y.tab.o lex.yy.o -o compilador

lex.yy.c:scanner.l y.tab.c
	flex scanner.l

y.tab.c:parser.y
	bison -d compilador.y
