// 23. Escreva um programa para ler 5 nomes (e sobrenomes) de pessoas (considere que cada nome possui no máximo 70 letras e contém apenas letras minúsculas). Converter apenas a inicial de cada nome para maiúscula. Imprimir cada nome após a conversão. 

#include <stdio.h>
#include <ctype.h>

int main(){
    char nome[5][70];

    for (int i = 0; i < 5; i++){
        printf("Nome %d: ", i+1);
        scanf(" %69[^\n]", nome[i]);

    nome[i][0] = toupper(nome[i][0]);

    for (int j = 0; nome[i][j] != '\0'; j++){
        if(nome[i][j-1] == ' ')
            nome[i][j] = toupper(nome[i][j]);
    }

    printf("Nome formatado: %s\n", nome[i]);
    
    }
    return 0;
}