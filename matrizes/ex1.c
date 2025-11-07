//Preencher um vetor X de 10 elementos(índices de 0 a 9) com o valor inteiro 30. Escrever o vetor X, após seu total preenchimento. 


#include <stdio.h>

int main(){
    int X[10];

    for (int i = 0; i < 10; i++){
        X[i] = 30;
        printf("%d ", X[i]);
    }
}