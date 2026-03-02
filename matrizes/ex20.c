// Escreva um programa para ler uma quantidade indeterminada de frases (considere que cada frase possui no máximo 70 caracteres). Para cada frase imprima a quantidade de espaços em branco que ela contém. O programa se encerra quando for digitada uma frase que não contém espaços em branco.

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    int espaco;

    do{
        printf("Escreva uma frase:\n");
        fgets(frase, sizeof(frase), stdin);
        espaco=0;

        for (int i = 0; i < frase[i] != '\0'; i++){
            if (frase[i] == ' ')
                espaco++;
        }

        printf("A frase digitada possui %d espaços\n", espaco);
    } while (espaco != 0);
    
    return 0;
}