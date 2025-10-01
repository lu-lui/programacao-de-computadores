/* Escreva um programa para ler o número de lados de um polígono regular, e a medida do lado (a medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
- Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
- Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
- Se o número de lados for igual a 5 escrever PENTÁGONO.*/

#include <stdio.h>

    int main(){
        int lados;
        float medida;

        printf("Digite o numero de lados do poligono (3, 4 ou 5): ");
        scanf("%d", &lados);

        switch (lados){
        case 3:
            printf("Digite a medida dos lados: ");
            scanf("%f", &medida);
            printf("O poligono e um TRIANGULO de perimetro %.2f", medida * 3);
            break;

        case 4:
            printf("Digite a medida dos lados: ");
            scanf("%f", &medida);
            printf("O poligono e um QUADRADO de area %.2f", medida * medida);
            break;

        case 5:
            printf("O poligono e um PENTAGONO");
            break;

        default:
            printf("Nao e um numero aceito");
            break;
        }
    }