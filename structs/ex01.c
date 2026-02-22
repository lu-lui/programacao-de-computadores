// 1. Construa uma estrutura para armazenar pontos (coordenadas x e y) no plano cartesiano. Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de pontos. 

#include <stdio.h> 
#define TAM 10

typedef struct plano{
    int x[TAM];
    int y[TAM];
}coordenada;

int main(){
    coordenada ponto;
    int i;
    
    for(i = 0; i < TAM; i++){
        printf("Coordenada %d:\nPONTO X:\n", i);
        scanf("%d", &ponto.x[i]);

        printf("PONTO Y:\n");
        scanf("%d", &ponto.y[i]);
    }

    printf("Pontos lidos:\n");
    for(i = 0; i < TAM; i++){
        printf("(%d, %d)\n", ponto.x[i], ponto.y[i]);
    }
        
    return 0;
}