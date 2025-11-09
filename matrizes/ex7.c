// 7. Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R. 

#include <stdio.h>

#define tam 10

int main(){
    int X[tam], R[tam], c = 0;

    printf("Valores de X: ");

    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < tam; i++){
        
        if (X[i] < 0){
            R[c] = X[i];
            printf("%d ", R[c]);
            c++;
        }   
    }

    /* OU: 
    for (int i = 0; i < c; i++){
        printf("%d ", R[i]);
    }*/

    return 0;
}