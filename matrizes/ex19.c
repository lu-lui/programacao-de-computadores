// 19. Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a primeira e a última letra. Considere que cada palavra possui no máximo 30 caracteres. 

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[10][30];

    for (int i = 1; i <= 10; i++){
        printf("Digite a palavra %d: ", i);
        scanf("%s", palavra[i]);

        printf("Primeira letra: %c \nUltima letra: %c \n", palavra[i][0], palavra[i][strlen(palavra[i])-1]);
    }

    return 0;
}