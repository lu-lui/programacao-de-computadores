//Analise o programa C abaixo e indique a resposta correta:

#include <stdio.h>

void leitura (int *qtde, int pares[100][2]);


int main() {
    int valores[100][2];
    int q, i;

    leitura(&q, valores);

    printf("Foram lidos %d pares de valores.\n", q);

    for (i = 0; i < q; i++)
        printf("%d %d\n", valores[i][0], valores[i][1]);
    return 0;
}

void leitura (int *qtde, int pares[100][2]){
    *qtde=0;
    while (scanf("%d%d", &pares[*qtde][0], &pares[*qtde][1])==2)
        (*qtde)++;
}

/*
( ) O programa compila mas não executa, devido a linha 10 estar errada.

( ) O programa não compila, devido as linhas 10 e 22 estarem erradas.

( ) O programa compila, executa e imprime:

(X) Foram lidos 7 pares de valores.
    1 2
    3 4
    5 6
    7 8
    9 10
    11 12
    13 14

( ) O programa não compila

( ) O programa compila mas não executa, devido a linha 22 estar errada.
  */