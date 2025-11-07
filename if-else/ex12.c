// Escreva um programa para ler 3 valores e escrever o maior deles. Considere que o usuário não informará valores iguais.

#include <stdio.h>

int main(){
    int v, maior = -100000000;

    printf("Comparacao de valores");

    for (int i = 1; i <= 3; i++){
        printf("Digite valor %d: ", i);
        scanf("%d", &v);

        if (v > maior)
            maior = v;
    }

    printf("O maior valor digitado foi %d", maior);
}