// 14. Escreva um programa para ler 3 valores e escrevê-los em ordem crescente. Considere que o usuário não informará valores iguais.

#include <stdio.h>

int main(){
    int v1, v2, v3;

    printf("Digite 3 valores: \n");
    scanf("%d%d%d", &v1, &v2, &v3);

    if (v1 < v3 && v2 < v3 && v1 < v2)
        printf("Ordem crescente: %d, %d, %d", v1, v2, v3);
    else if (v1 < v3 && v2 > v3 && v1 < v2)
        printf("Ordem crescente: %d, %d, %d", v1, v3, v2);
    else if (v1 < v3 && v2 < v3 && v1 > v2)
        printf("Ordem crescente: %d, %d, %d", v2, v1, v3);
    else if (v1 > v3 && v2 < v3 && v1 > v2)
        printf("Ordem crescente: %d, %d, %d", v2, v3, v1);
    else if (v1 > v3 && v2 > v3 && v1 < v2)
        printf("Ordem crescente: %d, %d, %d", v3, v1, v2);
    else 
        printf("Ordem crescente: %d, %d, %d", v3, v2, v1);
}
