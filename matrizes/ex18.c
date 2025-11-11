// 18. Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a quantidade de caracteres existentes na palavra. Considere que cada palavra possui no máximo 30 caracteres. 

#include <stdio.h>
#include <string.h>


int main(){
    char palavras[10]; //isso nao é um vetor com 10 strings, isso é uma string de 10 caracteres

        printf("Palavra: ");
        scanf("%s", palavras);

        printf("A palavra %s tem %d caracteres", palavras, strlen(palavras));

        return 0;
    }
    

    