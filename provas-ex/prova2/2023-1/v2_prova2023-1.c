//verso=ao inserindo os pontos ordenados

/*Você implementará um programa que classifica pontos que estão dispostos em um espaço bidimensional.
Todos os pontos estão distribuídos em 4 (quatro) quadrantes, representados por Q1, Q2, Q3 e Q4.
A entrada do programa consiste de um arquivo texto com um ou mais pares de inteiros, correspondendo cada par à coordenada (x,y) de um ponto, conforme o exemplo de entrada, apresentado abaixo. Não há limite da quantidade de pontos e não há informação desta quantidade.
O programa deve ler este arquivo e cada ponto deve ser armazenado em quatro listas encadeadas simples com cabeça, uma lista para cada quadrante. O programa deve decidir a qual quadrante o ponto pertence e grava as coordenadas do ponto, na mesma ordem de entrada, em um arquivo texto (observe o exemplo de saída).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct plano {
  int x;
  int y;
  struct plano *prox;
} ponto;

ponto *cria(void);
void carrega(ponto *q1, ponto *q2, ponto *q3, ponto *q4);
void salva(ponto *q1, ponto *q2, ponto *q3, ponto *q4);
void insere(ponto *cabeca, ponto *novo);

int main(){
  ponto *q1, *q2, *q3, *q4;
  
  q1 = cria();
  q2 = cria();
  q3 = cria();
  q4 = cria();
  carrega(q1, q2, q3, q4);
  salva(q1, q2, q3, q4);

  return 0;
}

ponto *cria(void){
  ponto *lista;
  
  lista = (ponto *)malloc(sizeof(ponto));
  lista->prox = NULL;
  
  return lista;
}

void carrega(ponto *q1, ponto *q2, ponto *q3, ponto *q4){
  FILE *arquivo;
  ponto *novo, *atual, *anterior;
  
  arquivo = fopen("entrada.txt", "r");
  
  while(1){
    novo = (ponto *)malloc(sizeof(ponto));
    if(novo == NULL)
      return;
      
    if(fscanf(arquivo, "%d%d", &novo->x, &novo->y) != 2){
      free(novo);
      break;
    }
    
    if(novo->x > 0 && novo->y > 0)
      insere(q1, novo);
    else if (novo->x < 0 && novo->y > 0)
      insere(q2, novo);
    else if (novo->x < 0 && novo->y < 0)
      insere(q3, novo);
    else if (novo->x > 0 && novo->y < 0)
      insere(q4, novo);
    else {
      free(novo);
      continue;
    }
  }
  fclose(arquivo);
}

void salva(ponto *q1, ponto *q2, ponto *q3, ponto *q4){
  FILE *arquivo;
  ponto *p;
  
  arquivo = fopen("saidaaa.txt", "w");
  if(arquivo == NULL){
    printf("Erro de abertura do arquivo\n");
    return;
  }
  
  fprintf(arquivo, "Q1:\n");
  for(p = q1->prox; p != NULL; p = p->prox)
    fprintf(arquivo, "(%d, %d)\n", p->x, p->y);
    
  fprintf(arquivo, "Q2:\n");
  for(p = q2->prox; p != NULL; p = p->prox)
    fprintf(arquivo, "(%d, %d)\n", p->x, p->y);
    
    fprintf(arquivo, "Q3:\n");
  for(p = q3->prox; p != NULL; p = p->prox)
    fprintf(arquivo, "(%d, %d)\n", p->x, p->y);
    
    fprintf(arquivo, "Q4:\n");
  for(p = q4->prox; p != NULL; p = p->prox)
    fprintf(arquivo, "(%d, %d)\n", p->x, p->y);
  
  fclose(arquivo);
}

void insere(ponto *cabeca, ponto *novo){
  ponto *anterior, *atual;

  anterior = cabeca;
  atual = cabeca->prox;

  while((atual != NULL && atual->x < novo->x) || (atual != NULL && atual->x == novo->x && atual->y < novo->y)){
        anterior = atual;
        atual = atual->prox;
      } 
      novo->prox = atual;
      anterior->prox = novo;
}