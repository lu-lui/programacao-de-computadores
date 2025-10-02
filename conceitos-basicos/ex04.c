/*4. Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor correspondente em graus Fahrenheit. */

#include <stdio.h>

int main(){
    float Fahrenheit, Celsius;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = 32 + (Celsius / 5 * 9);

    printf("A temperatura correspondente em Fahrenheit e: %.2f", Fahrenheit);
}