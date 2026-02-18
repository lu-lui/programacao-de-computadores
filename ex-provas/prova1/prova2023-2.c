/*É importante estudar o comportamento da temperatura média mensal com o passar dos anos porque isso nos ajuda a entender as mudanças climáticas e seus impactos na vida humana e na natureza. Por exemplo, podemos observar se há alterações no padrão das chuvas, das estações do ano, da vegetação, da biodiversidade, dos desastres naturais, etc. Além disso, podemos comparar os climas de diferentes regiões do mundo e ver como eles se relacionam com as características geográficas, econômicas e culturais desses lugares. Para estudar o clima, usamos dados meteorológicos coletados ao longo de pelo menos 30 anos, que são chamados de normais climatológicas. Esses dados podem ser representados em gráficos chamados de climogramas, ou de tabelas, que mostram a variação da temperatura ao longo dos meses.

Observe o programa abaixo, ele calcula e imprime as médias mensais da temperatura média:

A sua tarefa é desenvolver a função calcula_medias_mensais, que recebe a matriz tabela, os valores a e m (anos e meses) e devolve, por referência, o vetor medias_mensais que contém as médias das temperaturas médias de cada mês.
Exemplo de Saída:
1: 23.2
2: 23.0
3: 21.7
4: 18.5
5: 15.1
6: 12.4
7: 12.3
8: 13.4
9: 14.9
10: 17.5
11: 19.6
12: 21.9*/

#include <stdio.h>

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m);

int main() {
    float tabela[30][12]; //30 anos com 12 meses
    float medias_mensais[12]; //média de cada mês
    int a, m; //anos e meses

    for (a = 0; a < 30; a++) {
        for (m = 0; m < 12; m++) {
            scanf("%f", &tabela[a][m]);
        }
    }

    calcula_medias_mensais(tabela, medias_mensais, a, m);

    for (m = 0; m < 12; m++) {
        printf("%d: %.1f\n", m+1, medias_mensais[m]);
    }

    return 0;
}

void calcula_medias_mensais(float t[30][12], float mm[12], int a, int m){
    
    float soma;

    for ( m = 0; m < 12; m++){   
        soma=0;

        for ( a = 0; a < 30; a++){
            soma += t[a][m];
        }

        mm[m] = soma / 30;
    }
}