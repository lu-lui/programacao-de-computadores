/* 2. Escreva um programa para ler o salário mensal e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

#include <stdio.h>

int main(){
    float salario, reajuste, salario_reajustado;

    printf("Digite o valor atual do salario: R$");
    scanf("%f", &salario);

    printf("Percentual de reajuste:");
    scanf("%f", &reajuste);

    salario_reajustado = salario * (reajuste / 100 + 1);

    printf("O salario foi reajustado para R$%.2f", salario_reajustado);
}