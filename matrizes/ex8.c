// Ler um vetor Q de 10 posições (aceitar somente números positivos). Escreva a seguir o valor do maior elemento de Q e a respectiva posição(índice) que ele ocupa no vetor. 

#include <stdio.h>

#define tam 10

int main(){
    int Q[tam], maior, posicao;

    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &Q[i]);

        while (Q[i] < 0){
            printf("ERRO. Digite um valor positivo \n Posicao %d: ", i);
            scanf("%d", &Q[i]);
        }   
    }

    maior = Q[0];
    posicao = 0;

    for (int i = 1; i < tam; i++){
        if (Q[i] > maior){
            maior = Q[i];
            posicao = i;
        } 
    }
    printf("O maior elemento de Q e o %d que fica na posicao %d", maior, posicao);

    return 0;
}