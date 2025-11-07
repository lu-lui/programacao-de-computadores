// Escreva um programa para ler 2 valores e uma das seguintes operações a serem executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação). Considere que serão informados apenas códigos válidos. Calcular e escrever o resultado dessa operação sobre os dois valores lidos.

#include <stdio.h>

int main(){
    float v1, v2, total;
    int resposta;

    printf("Digite valor 1: ");
    scanf("%f", &v1);

    printf("Digite valor 2: ");
    scanf("%f", &v2);

    printf("O que deseja fazer agora? \n1. Adicao \n2. Subtracao \n3. Divisao \n4. Multiplicacao \nResposta: 8");
    scanf("%d", &resposta);

    switch (resposta)
    {
    case 1:
        total = v1 + v2;
        printf("Resultado: %.1f", total);
        break;

     case 2:
        total = v1 - v2;
        printf("Resultado: %.1f", total);
        break;

     case 3:
        total = v1 / v2;
        printf("Resultado: %.1f", total);
        break;

     case 4:
        total = v1 * v2;
        printf("Resultado: %.1f", total);
        break;

    default:
        break;
    }
}