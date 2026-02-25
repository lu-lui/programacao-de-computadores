/*Versão 2 da prova, inserindo os dados por ordem de entrada (no final)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct abc{
  char letra;
  struct abc *prox;
}abcd;

abcd *cria(void);
void carrega(abcd *vogal, abcd *consoante);
void salva(abcd *vogal, abcd *consoante);

int main(){
  abcd *vogal, *consoante;
  vogal = cria();
  consoante = cria();
  carrega(vogal, consoante);
  salva(vogal, consoante);
  return 0;

  printf("Executando...\n");
}

abcd *cria(void){
  abcd *lista;
  
  lista = (abcd *)malloc(sizeof(abcd));
  lista->prox = NULL;
  
  return lista;
}


void carrega(abcd *vogal, abcd *consoante){
  FILE *arq;
  abcd *novo, *p;
  arq = fopen("entrada.txt", "r");
  if(arq == NULL){
    printf("erro\n");
    return;
  }
  
    while(1){
      novo = (abcd *)malloc(sizeof(abcd));
      if(novo == NULL)
        break;
      
      novo->prox = NULL;
    
      if(fscanf(arq, " %c", &novo->letra) != 1){
        free(novo);
        break;
      }
      
      if(novo->letra == 'A' || novo->letra == 'E' || novo->letra == 'I' || novo->letra == 'O' || novo->letra == 'U')
        p = vogal;
      else
        p = consoante;
      
      while(p->prox != NULL){
        p = p->prox;
      }
      
      p->prox = novo;
      
    }
  fclose(arq);
}
void salva(abcd *vogal, abcd *consoante){
  FILE *arq;
  abcd *p;
  
  arq = fopen("v2_saida.txt", "w");
  
  fprintf(arq, "Vogais\n");
  for(p = vogal->prox; p != NULL; p = p->prox){
    fprintf(arq, "%c\n", p->letra);
  }
  
  fprintf(arq, "Consoantes\n");
  for(p = consoante->prox; p != NULL; p = p->prox){
    fprintf(arq, "%c\n", p->letra);
  }
  
  fclose(arq);
}