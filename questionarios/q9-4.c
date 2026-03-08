#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **A;
    int i, j, k, nlin=4, ncol=6;

    A = (int **) malloc(nlin * sizeof(int *));
    for ( i = 0; i < nlin; i++)
        A[i] = (int *) malloc(ncol * sizeof(int));

    k=0;
    for(i=0; i<nlin; i++)
        for(j=0; j<ncol; j++){
            A[i][j]=k+1;
            k++;
        }

    for(i=0; i<nlin; i++){
        for(j=0; j<ncol; j++){
            printf("%02d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Observe o programa acima e marque a opção que julgar correta:

( ) O programa não compila, pois há erros nas linhas 9 e 11.

( ) Nenhuma das outras opções.

( ) O programa compila sem advertências, executa e imprime:
    00 00 00 00 00 00
    00 00 00 00 00 00
    00 00 00 00 00 00
    00 00 00 00 00 00

( ) O programa compila, mas com advertências nas linhas 9 e 11.

(x) O programa compila sem advertências, executa e imprime:
    01 02 03 04 05 06
    07 08 09 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
*/