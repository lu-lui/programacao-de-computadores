// 21. Escreva um programa para ler uma quantidade indeterminada de palavras (considere que cada palavra possui no máximo 30 caracteres e contém apenas letras minúsculas). Converta todas as letras de cada palavra lida para maiúsculas. Imprimir cada palavra após a conversão. O programa se encerra quando for digitada uma palavra que começa pela letra 'f'. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra[30];

    do{
        printf("Palavra: ");
        scanf("%s", palavra);

        if (palavra[0] == 'f')
            break;

        for (int i = 0; palavra[i] != '\0'; i++){
            palavra[i] = toupper(palavra[i]);  
        }

        printf("%s\n", palavra);
        
    } while (palavra[0] != 'f');
    
    return 0;
}

