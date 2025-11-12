// 26. Escreva um programa para ler 10 palavras (considere que cada palavra possui no máximo 30 caracteres). Copiar para outra string cada palavra informada de forma que ela fique com os caracteres na ordem inversa. Escrever a string com a palavra invertida. 

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30], inversa[30];
    int c=0, j, k;

    for (int i = 1; i <= 10; i++){
        printf("Palavra %d: ", i);
        scanf("%s", palavra);

        for (j = 0, k = strlen(palavra)-1; k >= 0; j++, k--){
            inversa[j] = palavra[k];
        }

        inversa[j] = '\0';

        printf("Palavra invertida: %s\n", inversa);
    }
    
    return 0;
}