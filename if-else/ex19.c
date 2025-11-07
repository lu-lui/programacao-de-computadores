// 19. Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.

#include <stdio.h>

int main(){
    float l1, l2, l3;

    printf("Digite as medidas dos lados do triangulo: \n");
    scanf("%f%f%f", &l1, &l2, &l3);

    if (l1 == l2 && l2 == l3)
        printf("O triangulo e EQUILATERO");
    else if (l1 != l2 && l2 != l3 && l3 != l1)
        printf("O triangulo e ESCALENO");
    else
        printf("O triangulo e ISOSCELES");
}