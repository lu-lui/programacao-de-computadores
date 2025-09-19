/*Escreva um programa para ler o raio de um círculo, calcular e escrever a sua área.*/

#include <stdio.h>
#include <math.h>

int main(){
    float raio, area; 

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * pow(raio, 2);

    printf("A area do circulo de raio %.2f e %.2f", raio, area);
}