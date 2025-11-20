//Analise o programa C abaixo e indique a resposta correta:

#include <stdio.h>

typedef struct {
    int x, y;
}pares;

void leitura (int *qtde, pares vet[100]);

int main(){
    pares valores[100];
    int q, i;

    leitura(&q, valores);

    printf("Foram lidos %d pares de valores.\n", q);

    for (i = 0; i < q; i++)
        printf("%d %d\n", valores[i].x, valores[i].y);

    return 0;
}

void leitura (int *qtde, pares vet[100]){
    *qtde=0;
    while (scanf("%d%d", &vet[*qtde].x, &vet[*qtde].y)==2)
        (*qtde)++;
    
}

/*
( ) O programa não compila porque não dá para passar vetor de struct como parâmetro.

( ) O programa compila mas não executa, devido a linha 14 estar errada.

( ) O programa não compila, devido as linhas 14 e 26 estarem erradas.

( ) O programa compila mas não executa, devido a linha 26 estar errada.

( ) O programa compila, executa e imprime:

(X) Foram lidos 7 pares de valores.
1 2
3 4
5 6
7 8
9 10
11 12
13 14*/