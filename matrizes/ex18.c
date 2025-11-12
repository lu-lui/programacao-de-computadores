// 18. Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a quantidade de caracteres existentes na palavra. Considere que cada palavra possui no máximo 30 caracteres. 

#include <stdio.h>
#include <string.h>


int main(){
    char palavras[50]; //isso nao é um vetor com 10 strings, isso é uma string de 10 caracteres

        for (int i = 1; i <= 10; i++){
           printf("Palavra %d: ", i);
            scanf("%s", palavras);

            printf("A palavra %s tem %d caracteres\n", palavras, strlen(palavras));
        }
        
        return 0;
    }
    

    