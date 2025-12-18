#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudo;
    struct cel *prox;
};

typedef struct cel celula;

celula *cria(void);
void insere (int x, celula *p);
int remova(celula * p);
void imprime (celula * ini);

int main()
{
    celula *numa_lista;
    int removido;

    numa_lista = cria();
    insere(10, numa_lista);
    insere(100, numa_lista);
    insere(1000, numa_lista);
    imprime(numa_lista);
    removido=remova(numa_lista);
    imprime(numa_lista);
    return 0;
}

celula *cria(void)
{
    celula *start;

    start = (celula *) malloc(sizeof(celula));
    start->prox = NULL;
    return start;
}

void insere (int x, celula *p)
{
    celula *nova, *i;

   nova = (celula *) malloc(sizeof(celula));
   for (i = p; i->prox != NULL; i = i->prox);
   nova->conteudo = x;
   nova->prox = i->prox;
   i->prox = nova;
}

int remova(celula * p)
{
    celula *i, *j;
    int conteudo;

    if(p->prox == NULL)
        return 0;
    for(i = p, j = p->prox; j->prox != NULL; i = j, j = j->prox);
    i->prox = j->prox;
    conteudo = j -> conteudo;
    free(j);
    return conteudo;
}


void imprime (celula * ini)
{
    celula *p;

    printf("-\n");
    for(p = ini->prox; p != NULL; p = p->prox)
        printf("%d\n", p->conteudo);
}