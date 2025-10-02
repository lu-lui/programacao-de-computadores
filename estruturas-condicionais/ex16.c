// 16. Escreva um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano e escrever o quadrante ao qual o ponto pertence. Se o ponto estiver sobre os eixos, ou na origem, escrever NÃO ESTÁ EM NENHUM QUADRANTE. Considere que o usuário poderá informar qualquer valor para as coordenadas.

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
    else if (x > 0 && y < 0)
        printf("O ponto pertence ao quarto quadrante");
    else
        printf("NAO ESTA EM NENHUM QUADRANTE");
}
