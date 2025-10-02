/*3. Escreva um programa para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius. C / 5 = F - 32 / 9*/

#include <stdio.h>

int main(){
    float Fahrenheit, Celsius;

    printf("Digite uma temperatura em  graus Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = 5 * ((Fahrenheit - 32) / 9);

    printf("A temperatura correspondente em Celsius e: %.2f", Celsius);
}