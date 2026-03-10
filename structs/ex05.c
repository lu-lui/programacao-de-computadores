// 5. Utilizando as estruturas apropriadas definidas nos exercícios anteriores, crie um algoritmo que leia um conjunto de pontos (determinados por um valor sentinela) e calcule o envelope (retângulo que contém todos os pontos lidos). Imprima as coordenadas do envelope. 

#include <stdio.h>

typedef struct retangulo{
    int inf_esq_X;
    int inf_esq_Y;
    int sup_dir_X;
    int sup_dir_Y;
}retangulo;

int main(){
    retangulo ponto, canto;

    canto.inf_esq_X = -10;
    canto.inf_esq_Y = -10;
    canto.sup_dir_X = -10;
    canto.sup_dir_Y = -10;

    printf("Digite os pontos presentes no plano: \n(Digite o ponto(-10, -10) para encerrar a leitura)\n");
   
    while(1){
        printf("Ponto superior-direito: \nX: ");
        scanf("%d", &ponto.sup_dir_X);
        printf("Y: ");
        scanf("%d", &ponto.sup_dir_Y);
        if (ponto.sup_dir_X == -10 && ponto.sup_dir_Y == -10)
            break;

        if (ponto.sup_dir_X >= canto.sup_dir_X && ponto.sup_dir_Y >= canto.sup_dir_Y){
            canto.sup_dir_X = ponto.sup_dir_X;
            canto.sup_dir_Y = ponto.sup_dir_Y;
        }

        printf("Ponto inferior-esquerdo: \nX: ");
        scanf("%d", &ponto.inf_esq_X);
        printf("Y: ");
        scanf("%d", &ponto.inf_esq_Y);
        if (ponto.inf_esq_X == -10 && ponto.inf_esq_Y == -10)
            break;

        if (ponto.inf_esq_X <= canto.inf_esq_X && ponto.inf_esq_Y <= canto.inf_esq_Y){
            canto.inf_esq_X = ponto.inf_esq_X;
            canto.inf_esq_Y = ponto.inf_esq_Y;
        }
        
    } 

    printf("\tRetângulo envelope:\nPonto superior-direito: (%d, %d)\n", canto.sup_dir_X, canto.sup_dir_Y);
    printf("Ponto inferior-esquerdo: (%d, %d)\n", canto.inf_esq_X, canto.inf_esq_Y);

    return 0;
}

