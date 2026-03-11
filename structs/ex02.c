// 2. Crie uma estrutura para armazenar os dados de círculos (ponto central e raio). Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de círculos. 

#include <stdio.h>

typedef struct circulo{
    int centro_X;
    int centro_Y;
    double raio;
}circulo;

int main(){
    int TAM;

    printf("Quantidade de dados de círculos a serem lidos: ");
    scanf("%d", &TAM);

    circulo info[TAM];

    for (int i = 0; i < TAM; i++){
        printf("Ponto central %d: \nX: ", i+1);
        scanf("%d", &info[i].centro_X);

        printf("Y: ");
        scanf("%d", &info[i].centro_Y);

        printf("Raio %d: ", i+1);
        scanf("%lf", &info[i].raio);
    }

    for (int i = 0; i < TAM; i++){
        printf("\tCIRCULO %d \nPonto central: (%d, %d)\n", i+1, info[i].centro_X, info[i].centro_Y);
        printf("Raio: %.2lf\n", info[i].raio);
        printf("Área: %.2lf\n", 3.14 * info[i].raio * info[i].raio);
        printf("Comprimento: %.2lf\n", 2 * 3.14 * info[i].raio);  
    }
    return 0;
}