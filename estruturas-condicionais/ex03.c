// Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e escrever o maior deles.

#include <stdio.h>

int main(){
    float valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    if (valor1 > valor2)
        printf("Maior valor: %.2f", valor1);      
    else
        printf("Maior valor: %.2f", valor2);   
}