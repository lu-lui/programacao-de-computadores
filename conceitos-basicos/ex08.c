/*8. Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço do combustível é de R$ 2,70, escreva um programa para ler: a marcação do odômetro (Km) no início do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do dia. */

#include <stdio.h>

int main(){
    float odometro[3], gasto, recebido;

    printf("Quilometragem inicial: ");
    scanf("%f", &odometro[0]);

    printf("Quilometragem final: ");
    scanf("%f", &odometro[1]);

    printf("Combustivel gasto (litros): ");
    scanf("%f", &gasto);

    printf("Valor recebido: ");
    scanf("%f", &recebido);

    odometro[2] = odometro[1] - odometro[0]; 

    printf("Media de consumo: %.2f km/l \n", odometro[2] / gasto);
    printf("Lucro do dia: R$%.2f", recebido - (gasto * 2.70));

    return 0;
}