/*No arquivo de texto entrada.txt estão informações sobre frutas: o nome, o tipo e as quantidades de horas mínima e máxima de frio ideais para o cultivo da fruta. Você deverá ler estas informações e armazená‐las em uma lista simplesmente encadeada COM CABEÇA, ordenadas pelo nome da fruta e então gravar a lista em um arquivo de texto saida.txt, preservando o ordenamento da lista.
Para isso, você deverá implementar as funções cria, carrega e salva para completar o programa C abaixo.

Você deverá implementar as funções:
cria (vale 2.5 pontos): que aloca a célula que será cabeça da lista simplesmente encadeada, retornando seu endereço;
carrega (vale 5.0 pontos): que lê os dados de cada fruta de um arquivo texto (50%) e os insere ordenados na lista (50%) pelo nome da fruta; e, 
salva (vale 2.5 pontos): que grava os dados de cada célula presente na lista em um arquivo texto.
NÃO É PERMITIDO: declarar varáveis globais, alterar os protótipos das funções e o corpo da função main.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lfrutas {
    char nome[100];
    char tipo[100];
    int horas_frio_min;
    int horas_frio_max;
    struct lfrutas *prox;
};

struct lfrutas *cria(void);
void carrega(struct lfrutas *lista);
void salva(struct lfrutas *lista);

int main() {
    struct lfrutas *l;

    l = cria();
    carrega(l);
    salva(l);
    return 0;
}

struct lfrutas *cria(void){
    struct lfrutas *cabeca;

    cabeca = (struct lfrutas *)malloc(sizeof(struct lfrutas));
    cabeca->prox = NULL;
    return cabeca;
}

void carrega(struct lfrutas *lista){
    struct lfrutas *p;
    FILE *arquivo;

    arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL){
		printf("Erro na abertura");
		return;
	}

    while(1){
        p = (struct lfrutas *)malloc(sizeof(struct lfrutas));
        if (p == NULL) 
            break;

        if(fscanf(arquivo, "%99[^;];%99[^;];%d;%d", p->nome, p->tipo, &p->horas_frio_min, &p->horas_frio_max) != 4){
            free(p);
            break;
        }

        p->prox = lista->prox;
        lista->prox = p;
    }

    fclose(arquivo);
}

void salva(struct lfrutas *lista){
    struct  lfrutas *p;
    FILE *arquivo;

    arquivo = fopen("saida.txt", "w");

    for (p = lista->prox; p != NULL; p = p->prox)
        fprintf(arquivo, "%s;%s;%d;%d", p->nome, p->tipo, p->horas_frio_min, p->horas_frio_max);
    
    fclose(arquivo);

    //acho que precisa fazer um whhile pro free
}