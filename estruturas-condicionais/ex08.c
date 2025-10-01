// Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar

#include <stdio.h>

int main(){
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0)
        printf("O valor e PAR");
    else    
        printf("O valor e IMPAR");
}