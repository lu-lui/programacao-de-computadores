// 22. Escreva um programa para ler 5 frases (considere que cada frase possui no máximo 70 caracteres). Converter todas as letras minúsculas existentes na frase (somente as letras minúsculas) para maiúsculas. Imprimir cada frase após a conversão. 

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char frase[5][70];

    for (int i = 0; i < 5; i++){
        printf("Frase %d: ", i+1);
        scanf(" %69[^\n]", frase[i]);


        for (int j = 0; frase[i][j] != '\0' ; j++){
            if (islower(frase[i][j]))
                frase[i][j] = toupper(frase[i][j]);
        }
        
        printf("Frase modificada: \n%s\n", frase[i]);
    }
    return 0;
}