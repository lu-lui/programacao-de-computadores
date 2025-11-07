/* Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7 * h)-58
- para mulheres: (62.1*h)-44.7*/
#include <stdio.h>

int main(){
    int genero;
    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu genero (1-Feminino / 2-Masculino): ");
    scanf("%d", &genero);

    switch (genero){
    case 1:
        peso = (62.1 * altura - 44.7 );
        printf("Seu peso ideal eh: %.2f", peso);
        break;

    case 2: 
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal eh: %.2f", peso);
        break;
    
    default:
        break;
    }
}