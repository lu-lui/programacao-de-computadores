//13. Escreva um programa para ler 3 valores e escrever a soma dos 2 maiores. Considere que o usuário não informará valores iguais.

#include <stdio.h>

int main(){
    int v1, v2, v3;

    printf("Digite 3 valores: \n");
    scanf("%d%d%d", &v1, &v2, &v3);

    if (v1 > v3 && v2 > v3)
        printf("Soma dos dois maiores valores: %d", v1 + v2);
    else if (v1 > v3 && v2 < v3)
        printf("Soma dos dois maiores valores: %d", v1 + v3);
    else
        printf("Soma dos dois maiores valores: %d", v3 + v2);
}
