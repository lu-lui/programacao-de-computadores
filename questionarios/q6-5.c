#include <stdio.h>

void leitura (int *qtde, int pares[100][2]);

int main(){
    int valores[100][2];
    int q, i;

    leitura(&q, valores);

    printf("Foram lidos %d pares de valores.\n", q);

    for (i = 0; i < q; i++)
        printf("%d %d\n", valores[i][0], valores[i][1]);
    return 0;
}

void leitura (int *qtde, int pares[100][2]){
    *qtde=0;
    while (scanf("%d%d", &pares[*qtde][0], &pares[*qtde][1])==2){
        (*qtde)++;
    }
    
}