// 12. Ler 2 vetores X e Y de 10 elementos cada um (ocupando as posições de 0 a 9 em cada vetor). Intercalar os elementos desses 2 vetores formando assim, um novo vetor R de 20 elementos, onde nas posições pares de R (0,2,4,6,8,…) estejam os elementos de X e nas posições ímpares (1,3,5,7,9,…) os elementos de Y. Após a geração completa do vetor R, escreva-o. 

#include <stdio.h>

#define tam 10


int main(){
    int X[tam], Y[tam], R[tam*2], c=0;

    printf("Digite valores do vetor X:\n");
    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &X[i]);
    }

    printf("Digite valores do vetor Y:\n");
    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &Y[i]);
    }

    for (int i = 0; i < tam; i++){
        R[c] = X[i];
        R[c+1] = Y[i];
        c+=2;
    }

    printf("Vetor R: ");
    for (int i = 0; i < tam*2; i++){
        printf("%d ", R[i]);
    }   

    return 0;
}