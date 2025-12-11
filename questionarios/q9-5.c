#include <stdio.h>
#include <stdlib.h>

int * f (int * n);
void g (int * v, int n, int * menor, int * maior);

int main(){
    int max, min, qtde=0;
    int * vetor;
    vetor=f(&qtde);
    g(vetor, qtde, &min, &max);
    printf ("Menor do vetor: %d\n Maior do Vetor: %d\n", min, max);
    return 0;
}

int * f (int * n){
    int * temp, i;
    printf ("Informe a quantidade de elementos: ");
    scanf ("%d", n);
    temp = (int *) malloc (*n * sizeof (int));
    for ( i = 0; i < *n; i++){
        printf("Informe o valor: ");
        scanf ("%d", &temp[i]);
    }
    return temp;
}

void g (int * v, int n, int * menor, int * maior){
    int i;
    *maior = -999999;
    *menor = 999999;
    for (i = 0; i < n; i++){
        if (v[i]>*maior)
            *maior=v[i];
        if(v[i]<*menor)
            *menor=v[i];
    }
}