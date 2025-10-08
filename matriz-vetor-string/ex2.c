//Preencher um vetor A de 10 elementos(índices de 0 a 9) com os números inteiros 10, 20, 30, 40, 50, …, 100. Escrever o vetor A após o seu total preenchimento. 

#include <stdio.h>

int main(){
    int A[10], a = 10;

    for (int i = 0; i < 10; i++){
        A[i] = a;
        printf("%d ", A[i]);
        a += 10;
    }
    
}