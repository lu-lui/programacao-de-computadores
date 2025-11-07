// Analise o programa C abaixo e indique a opção correta:

#include <stdio.h>

int main(){
    int matriz[3][3] = {{1, 2, 3}, {4, 5}, {6}};
    int i, j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
( ) Compila, executa e imprime:
    1 2 3
    4 5 6
    0 0 0

( ) Não compila e dá erro na linha 4

( ) Compila mas não executa

(X) Compila, executa e imprime:
    1 2 3
    4 5 0
    6 0 0

( ) Nenhuma das opções
*/