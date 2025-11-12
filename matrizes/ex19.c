// 19. Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a primeira e a última letra. Considere que cada palavra possui no máximo 30 caracteres. 

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30];

    for (int i = 1; i <= 10; i++){
        printf("Digite a palavra 1: ");
        scanf("%s", palavra);

        printf("Primeira letra: %c \nUltima letra: %c \n", palavra[0], palavra[strlen(palavra)-1]);
    }

    return 0;
}