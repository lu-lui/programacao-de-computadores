/*5. Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes (considere que não será descontado a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2. */

#include <stdio.h>

int main(){
    float comprimento, largura, altura, total;

    printf("Dimensões da casa: \nComprimento: ");
    scanf("%f", &comprimento);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Largura: ");
    scanf("%f", &largura);

    total = altura * largura * comprimento;

    printf("Total: %.2f", total);

    for (int i = total; i < 0; i--){
        if (total)
        {
            /* code */
        }
        
    }
    
}
