//23. Escreva um algoritmo que imprima todos os números primos existentes entre N1 e N2, onde N1 e N2 são números positivos fornecidos pelo usuário

#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite numero 1: ");
    scanf("%d", &n1);

    printf("Digite numero 2: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++)
        printf("%d ", i);
    
    return 0;
}