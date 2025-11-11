/*Números amigos são dois números inteiros diferentes relacionados de tal forma que a soma dos divisores próprios de um é igual ao outro número.
Os divisores próprios de um número são os divisores a partir de 1 (inclusive) exceto o próprio número. Por exemplo, os divisores próprios de 6 são 1, 2 e 3.
A sua tarefa é desenvolver a função numeros_amigos, que recebe n (limite de valor dos números amigos) e devolve, por referência, os pares de amigos (matriz pares_amigos) e a quantidade de pares encontrados (q).*/

#include <stdio.h>

#define TAM 1000

void numeros_amigos(int n, int amigos[TAM][2], int *q);

int main() {
    int n, i, q;
    int pares_amigos[TAM][2];

    scanf("%d", &n);

    numeros_amigos(n, pares_amigos, &q);

    for (i = 0; i < q; i++)
        printf("(%d,%d)\n", pares_amigos[i][0], pares_amigos[i][1]);

    return 0;
}

void numeros_amigos(int n, int amigos[TAM][2], int *q){

    
}