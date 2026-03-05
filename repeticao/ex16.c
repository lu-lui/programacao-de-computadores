//16. Ler um valor A e um valor N. Imprimir a soma dos N números inteiros a partir de A(inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N(apenas N). 

#include <stdio.h>

int main(){
    int A, N, s = 0;

    printf("Valor A: ");
    scanf("%d", &A);

    printf("Valor N: ");
    scanf("%d", &N);
    while (N <= 0){
        printf("Valor invalido\nValor N: ");
        scanf("%d", &N);
    }

    for (int i = 0; i < N; i++){
        printf("%d ", A + i);
        s += A + i;
    }
   
    printf("\nSoma = %d\n", s);

    return 0;
}
