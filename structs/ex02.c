// 2. Crie uma estrutura para armazenar os dados de círculos (ponto central e raio). Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de círculos. 

#include <stdio.h>

typedef struct circulo{
    double centro;
    double raio;
}circulo;

int main(){
    int TAM;

    printf("Quantidade de dados de círculos a serem lidos: ");
    scanf("%d", &TAM);

    circulo info[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Ponto central %d: ", i+1);
        scanf("%lf", &info[i].centro);

        printf("Raio %d: ", i+1);
        scanf("%lf", &info[i].raio);
    }

    for (int i = 0; i < TAM; i++){
        printf("\tCIRCULO %d \nPonto central: %.2lf\n", i+1, info[i].centro);
        printf("Raio: %.2lf\n", info[i].raio);
        printf("Área: %.2lf\n", 3.14 * info[i].raio * info[i].raio);
        printf("Comprimento: %.2lf\n", 2 * 3.14 * info[i].raio);  
    }
    return 0;
}