#include <stdio.h>

int main() {
    float comprimento, largura, altura, area_total, caixas;
    int caixas_inteiras;

    printf("Dimensões da cozinha:\n");

    printf("Comprimento (m): ");
    scanf("%f", &comprimento);

    printf("Largura (m): ");
    scanf("%f", &largura);

    printf("Altura (m): ");
    scanf("%f", &altura);

    area_total = 2 * altura * (comprimento + largura);

    caixas = area_total / 1.5;

    caixas_inteiras = (int)caixas;
    if (caixas_inteiras < caixas) {
        caixas_inteiras++;
    }

    printf("\nArea total das paredes: %.2f m2", area_total);
    printf("\nQuantidade de caixas de azulejos: %d\n", caixas_inteiras);
}