//Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de ordem par de Y (elementos com índice 0,2,4,6,8) receberão os respectivos elementos de X multiplicados por 2. Os elementos de ordem ímpar de Y (elementos com índices 1,3,5,7,9) receberão os respectivos elementos de X multiplicados por 3. Escrever o vetor Y. 


#include <stdio.h>

#define tam 10

int main(){
    int X[tam], Y[tam];

    printf("Digite os valores do vetor X: ");
    
    for (int i = 0; i < tam; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &X[i]);
    }

    printf("Vetor Y: ");

    for (int i = 0; i < tam; i++){
        if (i % 2 == 0){
            Y[i] = X[i] * 2;
            printf("%d ", Y[i]);
        } else {
            Y[i] = X[i] * 3;
            printf("%d ", Y[i]);
        }  
    }

    return 0;
}