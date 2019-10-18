
<<<<<<< HEAD
compilador:lex.yy.c parser.tab.c
	g++ parser.tab.c lex.yy.c -o compilador

lex.yy.c:scanner.l parser.tab.c
	flex scanner.l

parser.tab.c:parser.y
	bison -d parser.y

clean:
		rm -f compilador *.o
		rm -f compilador *.c
		rm -f compilador parser.tab.h
=======
compilador:lex.yy.o y.tab.o
	g++ y.tab.o lex.yy.o -o compilador

lex.yy.c:scanner.l y.tab.c
	flex scanner.l

y.tab.c:parser.y
	bison -d compilador.y
>>>>>>> 884ea95cabde574b39975da5d251d2312d9f22bc
