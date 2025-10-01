// Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.
#include <stdio.h>

int main(){
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor >= 0)
        printf("NÚMERO POSITIVO");      
    else
        printf("NUMERO NEGATIVO");
}