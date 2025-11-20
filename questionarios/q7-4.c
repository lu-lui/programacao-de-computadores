#include <stdio.h>

typedef struct {
    int x, y;
}pares;

void leitura (int *qtde, pares vet[100]);

int main(){
    pares valores[100];
    int q, i;

    leitura(&q, valores);

    printf("Foram lidos %d pares de valores.\n", q);

    for (i = 0; i < q; i++)
        printf("%d %d\n", valores[i].x, valores[i].y);

    return 0;
}

void leitura (int *qtde, pares vet[100]){
    *qtde=0;
    while (scanf("%d%d", &vet[*qtde].x, &vet[*qtde].y)==2)
        (*qtde)++;
    
}
