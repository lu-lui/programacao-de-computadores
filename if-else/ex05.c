// Escreva um programa para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los em ordem crescente

#include <stdio.h>

int main(){
    float valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);

    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    if (valor1 < valor2)
        printf("Valores em ordem crescente: %.2f, %.2f", valor1, valor2);      
    else
        printf("Valores em ordem crescente: %.2f, %.2f", valor2, valor1);        
}