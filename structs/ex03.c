// 3. Crie uma estrutura para armazenar os dados de retângulos (pontos diagonais inferior- esquerda e superior-direita). Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de retângulos. 

//é só imprimir?? só isso?

#include <stdio.h>

typedef struct retangulo{
    int inf_esq_X;
    int inf_esq_Y;
    int sup_dir_X;
    int sup_dir_Y;
}retangulo;

int main(){
    int TAM;

    printf("Digite a quantidade de retângulos a ser impressa: ");
    scanf("%d", &TAM);

    retangulo ponto[TAM];

    for (int i = 0; i < TAM; i++){
        printf("\tRetângulo %d: \nPonto superior-direito: \nX: ", i+1);
        scanf("%d", &ponto[i].sup_dir_X);
        printf("Y: ");
        scanf("%d", &ponto[i].sup_dir_Y);
        printf("Ponto inferior-esquerdo: \nX: ");
        scanf("%d", &ponto[i].inf_esq_X);
        printf("Y: ");
        scanf("%d", &ponto[i].inf_esq_Y);
    }

    for (int i = 0; i < TAM; i++){
        printf("\tRetângulo %d: \n", i+1);
        printf("Ponto superior-direito: (%d, %d)\n", ponto[i].sup_dir_X, ponto[i].sup_dir_Y);
        printf("Ponto inferior-esquerdo: (%d, %d)\n", ponto[i].inf_esq_X, ponto[i].inf_esq_Y);
    }
    
    return 0;
}