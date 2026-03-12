// 7. Utilizando as estruturas apropriadas definidas nos exercícios anteriores, crie um algoritmo que leia as informações de um círculo e um conjunto de pontos (determinados por um valor sentinela) e informe para cada ponto lido se está dentro ou fora do círculo. Imprima os totais de pontos dentro e fora do círculo. 

#include <stdio.h>

typedef struct circulo{
    int centro_X;
    int centro_Y;
    double raio;
}circulo;

int main(){
    circulo info;
    int X, Y, dentro=0, fora=0;

    printf("Ponto central: \nX: ");
    scanf("%d", &info.centro_X);

    printf("Y: ");
    scanf("%d", &info.centro_Y);

    printf("Raio: ");
    scanf("%lf", &info.raio);
    
    printf("Digite pontos para conferência: \n(Digite o ponto (0, 0) para encerrar a execução)\n");
    for (;;){
        printf("X: ");
        scanf("%d", &X);
        printf("Y: ");
        scanf("%d", &Y);
        if(X == 0 && Y == 0)
            break;

        if((X - info.centro_X)*(X - info.centro_X) + (Y - info.centro_Y)*(Y - info.centro_Y) <= info.raio*info.raio){
            printf("O ponto está dentro do círculo\n");
            dentro++;
        } else {
            printf("O ponto está fora do círculo\n");
            fora++;
        }
    }

    printf("Pontos dentro do círculo: %d \n Pontos fora do círculo: %d\n", dentro, fora);

    return 0;
}