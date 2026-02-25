/*Versão da prova inserindo no final*/

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

struct pragas *cria(void);
void imprime(struct pragas *lista);
void carrega(struct pragas *lista);

int main() {
    struct pragas *lista;
    lista = cria();
    carrega(lista);
    imprime(lista);
    return 0;
}

struct pragas *cria(void){
    struct pragas *lista;

    lista = (struct pragas *)malloc(sizeof(struct pragas));
    lista->prox = NULL;

    return lista;
}

void imprime(struct pragas *lista){
    struct pragas *novo;

    for(novo = lista->prox; novo != NULL; novo = novo->prox){
        printf("%s\n%s\n%s\n%d\n%d\n%d\n%s\n", novo->nome_popular, novo->nome_cientifico, novo->culturas, novo->quantidade, novo->temperatura_min, novo->temperatura_max, novo->condicoes);
    }
}

void carrega(struct pragas *lista){
    struct pragas *novo, *p;
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL){
        printf("Erro de abertura do arquivo\n");
        return;
    }

    while(1){
        novo = (struct pragas *)malloc(sizeof(struct pragas));
        if(novo == NULL)
            break;
        
        p = lista;
        novo->prox = NULL;

        if(fscanf(arquivo, " %199[^\n]\n%199[^\n]\n%199[^\n]\n%d\n%d\n%d\n%199[^\n]\n", novo->nome_popular, novo->nome_cientifico, novo->culturas, &novo->quantidade, &novo->temperatura_min, &novo->temperatura_max, novo->condicoes) != 7){
            free(novo);
            break;
        }


        while(p->prox != NULL){
            p = p->prox;
        }

        p->prox = novo;
    }

    fclose(arquivo);
}