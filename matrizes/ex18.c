// 18. Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a quantidade de caracteres existentes na palavra. Considere que cada palavra possui no máximo 30 caracteres. 

#include <stdio.h>
#include <string.h>


int main(){
    char palavras[10][50]; 

        for (int i = 1; i <= 10; i++){
           printf("Palavra %d: ", i);
            scanf("%s", palavras[i]);

            printf("\tA palavra %s tem %lu caracteres\n", palavras[i], strlen(palavras[i]));
        }
        
        return 0;
    }