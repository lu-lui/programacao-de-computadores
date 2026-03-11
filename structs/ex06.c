// 6. Utilizando as estruturas apropriadas definidas nos exercícios anteriores, crie um algoritmo que leia as coordenadas de um retângulo e um conjunto de pontos (determinados por um valor sentinela) e informe para cada ponto lido se está dentro ou fora do retângulo. Imprima a quantidade de pontos dentro e fora do retângulo. 

#include <stdio.h>

typedef struct retangulo{
    int inf_esq_X;
    int inf_esq_Y;
    int sup_dir_X;
    int sup_dir_Y;
}retangulo;

int main(){
    retangulo ponto;
    int X, Y, dentro=0, fora=0;

   
    printf("\tDigite os pontos que formam o retângulo: \nPonto superior-direito: \nX: ");
    scanf("%d", &ponto.sup_dir_X);
    printf("Y: ");
    scanf("%d", &ponto.sup_dir_Y);
    printf("Ponto inferior-esquerdo: \nX: ");
    scanf("%d", &ponto.inf_esq_X);
    printf("Y: ");
    scanf("%d", &ponto.inf_esq_Y);
    
    printf("Digite pontos para conferência: \n(Digite o ponto (0, 0) para encerrar a execução)\n");
    while(1){
        printf("X: ");
        scanf("%d", &X);
        printf("Y: ");
        scanf("%d", &Y);
        if(X == 0 && Y == 0)
            break;

        if (X >= ponto.inf_esq_X && X <= ponto.sup_dir_X && Y >= ponto.inf_esq_Y && Y <= ponto.sup_dir_Y){
            printf("O ponto está dentro do retângulo\n");
            dentro++;
        }else{
            printf("O ponto está fora do retângulo\n");
            fora++;
        }  
    }   

    printf("Pontos dentro do retângulo: %d \nPontos fora do retângulo: %d\n", dentro, fora);
    
    return 0;   
} 