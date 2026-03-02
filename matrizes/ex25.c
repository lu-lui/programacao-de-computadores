// 25. Escreva um programa para ler 10 palavras (considere que cada palavra possui no máximo 30 caracteres). Contar e escrever a frequência de cada caractere presente nestas palavras. 

#include <stdio.h>

int main(){
    char palavra[10][30];  
    int freq[256] = {0};    

    for(int i = 0; i < 10; i++){
        printf("Palavra %d: ", i+1);
        scanf("%29s", palavra[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; palavra[i][j] != '\0'; j++){
            unsigned char c = palavra[i][j];
            freq[c]++;
        }
    }

    printf("\nFrequencia dos caracteres:\n");
    for(int i = 0; i < 256; i++){
        if(freq[i] > 0)
            printf("%c = %d\n", i, freq[i]);
    }
    return 0;
}