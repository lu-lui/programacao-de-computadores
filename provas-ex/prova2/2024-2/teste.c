#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct pragas {
    char nome_popular[200];
    char nome_cientifico[200];
    char culturas[200];
    int quantidade;
    int temperatura_min;
    int temperatura_max;
    char condicoes[200];
    struct pragas *prox;
};



int main(){
    FILE *arquivo;
    struct pragas novo;
    


    arquivo = fopen("dados.txt", "r");
    
    fscanf(arquivo, " %199[^\n]\n%199[^\n]\n%199[^\n]\n%d\n%d\n%d\n%199[^\n]\n", novo.nome_popular, novo.nome_cientifico, novo.culturas, &novo.quantidade, &novo.temperatura_min, &novo.temperatura_max, novo.condicoes);

    printf("%s\n%s\n%s\n%d\n%d\n%d\n%s\n", novo.nome_popular, novo.nome_cientifico, novo.culturas, novo.quantidade, novo.temperatura_min, novo.temperatura_max, novo.condicoes);
          
    fclose(arquivo);
}
