/*A Tabela 1, apresentada abaixo, contém o levantamento de horas de frio em 2023 na Estação Experimental Cascata da EMBRAPA1

                        -----TABELA-----

Observe o programa abaixo, ele calcula e imprime o percentual de horas de frio a cada mês em relação à sua média histórica e o percentual do total de horas de frio em relação ao total de horas de frio da média histórica:

A sua tarefa é desenvolver a função calcula, que recebe a matriz horas_de_frio e o vetor horas_de_frio_mes_media e devolve, por referência, o vetor perc_horas_de_frio_mes e o valor perc_total_horas_de_frio que contém, respectivamente, os percentuais de horas de frio mensais em relação à media histórica do mês e o percentual do total de horas de frios dos meses em relação ao total da média histórica.

Exemplo de Saída:
Percentual de horas de frio por mes:
29.0
84.7
80.3
95.5
41.0
Percentual do total de horas de frio em relacao a media:
73.6*/

#include <stdio.h>

void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float
*perc_total_horas_de_frio);

int main() {
    int horas_de_frio_mes_media[5] = { 62, 124, 137, 112, 61 }; //de 1954 a 2017
    int horas_de_frio[5][5];
    float perc_horas_de_frio_mes[5];

    int m, s; //(m)ês e (s)emana
    float perc_total_horas_de_frio = 0.0; //percentual do total de horas em relação à media
    
    for (m = 0; m < 5; m++)
        for (s = 0; s < 5; s++)
            scanf("%d", &horas_de_frio[m][s]);

    calcula(horas_de_frio, horas_de_frio_mes_media, perc_horas_de_frio_mes, &perc_total_horas_de_frio);

    printf("Percentual de horas de frio por mes:\n");
    for (m = 0; m < 5; m++)
        printf("%.1f\n", perc_horas_de_frio_mes[m]);
    
        printf("Percentual do total de horas de frio em relacao a media:\n%.1f", perc_total_horas_de_frio);

    return 0;
}

void calcula(int horas_de_frio[5][5], int horas_de_frio_mes_media[5], float perc_horas_de_frio_mes[5], float
*perc_total_horas_de_frio){
    
}