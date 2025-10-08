// 6. Ler um vetor A de 10 elementos e um valor V. Conte e escreva quantas vezes o valor V ocorre no vetor A. 

#include <stdio.h>

#define tam 10

int main(){
    int A[tam];
    int V, W = 0;

    printf("Valores do Vetor A: ");
    
    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("Valor V: ");
    scanf("%d", &V);

    for (int i = 0; i < tam; i++){
        if (A[i] == V)
            W++;
    }

    printf("O valor %d aparece %d vezes no Vetor A", V, W);
}