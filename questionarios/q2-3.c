// Observe o código abaixo e marque a opção que explica seu funcionamento:

#include <stdio.h>

int main(void) {
	int valor=5;
	
	switch (valor) {
	case "valor < 5":
		printf("A");
	case "valor == 5":
		printf("B");
	default:
		printf("C");
	}
	
	return 0;
}

/*
( ) Compila e imprime BC

( ) Nenhuma das alternativas

(X) Compila e imprime B

( ) Não compila

( ) Compila e imprime C
*/