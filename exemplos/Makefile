all: bib.o exemplo-46.o
	gcc bib.o exemplo-46.o -o exemplo-46

exemplo-46.o: exemplo-46.c
	gcc -c exemplo-46.c

bib.o: bib.c
	gcc -c bib.c

limpa:
	rm -f *.o