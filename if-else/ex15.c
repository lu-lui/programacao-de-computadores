// 15. Escreva um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Considere que o usuário não informará nenhuma coordenada igual a zero.

#include <stdio.h>

int main(){
    int x, y;

    printf("Digite as cordenadas do plano cartesiano \nPonto X: ");
    scanf("%d", &x);

    printf("Ponto Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("O ponto pertence ao primeiro quadrante");
    else if (x < 0 && y > 0)
        printf("O ponto pertence ao segundo quadrante");
    else if (x < 0 && y < 0)
        printf("O ponto pertence ao terceiro quadrante");
    else
        printf("O ponto pertence ao quarto quadrante");
}