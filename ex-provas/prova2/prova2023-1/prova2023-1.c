/*Você implementará um programa que classifica pontos que estão dispostos em um espaço bidimensional.
Todos os pontos estão distribuídos em 4 (quatro) quadrantes, representados por Q1, Q2, Q3 e Q4.
A entrada do programa consiste de um arquivo texto com um ou mais pares de inteiros, correspondendo cada par à coordenada (x,y) de um ponto, conforme o exemplo de entrada, apresentado abaixo. Não há limite da quantidade de pontos e não há informação desta quantidade.
O programa deve ler este arquivo e cada ponto deve ser armazenado em quatro listas encadeadas simples com cabeça, uma lista para cada quadrante. O programa deve decidir a qual quadrante o ponto pertence e grava as coordenadas do ponto, na mesma ordem de entrada, em um arquivo texto (observe o exemplo de saída).*/


#include <stdio.h>
#include <stdlib.h>

struct pontos{
    int x;
    int y;
    struct pontos *prox;
};

typedef struct pontos coordenada;

coordenada *cria(void); //CRIA PRECISA TER UM PONTEIRO
void carrega(coordenada *q1, coordenada *q2, coordenada *q3, coordenada *q4);
void salva(coordenada *q1, coordenada *q2, coordenada *q3, coordenada *q4);
void aloca(coordenada *q);

int main(){
    coordenada *q1, *q2, *q3, *q4;

    q1 = cria();
    q2 = cria();
    q3 = cria();
    q4 = cria();
    carrega(q1, q2, q3, q4);
    salva(q1, q2, q3, q4);

    return 0;
}

coordenada *cria(void){
    coordenada *lista;

    lista = (coordenada *)malloc(sizeof(coordenada));
    lista->prox = NULL;

    return lista;
}

void carrega(coordenada *q1, coordenada *q2, coordenada *q3, coordenada *q4){
    FILE *arquivo;
    coordenada *novo, *p;

    arquivo = fopen("entrada.txt", "r");

    while(1){
        novo = (coordenada *)malloc(sizeof(coordenada));

        if(fscanf(arquivo, "%d%d", &novo->x, &novo->y) != 2){ //colocar & nos inteirosssss
            free(novo);
            break;
        }

        novo->prox = NULL;

        if(novo->x > 0 && novo->y > 0)
            p = q1;
        else if(novo->x < 0 && novo->y > 0)
            p = q2;
        else if((novo->x < 0 && novo->y < 0))
            p = q3;
        else if((novo->x > 0 && novo->y < 0))
            p = q4;
        else{
            free(novo);
            continue;
        }
    
    while (p->prox != NULL)
        p = p->prox; //leva o ponteiro até o fim da lista

    p->prox = novo;
    }

    fclose(arquivo);
}

void salva(coordenada *q1, coordenada *q2, coordenada *q3, coordenada *q4){
    FILE *arquivo;
    coordenada *p;

    arquivo = fopen("saida.txt", "w");

    fprintf(arquivo, "Q1:\n");
    for(p = q1->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%d %d\n", p->x, p->y);
    }
    fprintf(arquivo, "Q2:\n");
    for(p = q2->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%d %d\n", p->x, p->y);
    }
    fprintf(arquivo, "Q3:\n");
    for(p = q3->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%d %d\n", p->x, p->y);
    }
    fprintf(arquivo, "Q4:\n");
     for(p = q4->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%d %d\n", p->x, p->y);
    }

    fclose(arquivo);
}