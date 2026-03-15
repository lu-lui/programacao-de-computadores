// 8 Faça um programa que leia uma string (de 80 caracteres) chamada linha e, com uma função, identifique cada palavra (substring) desta linha copiando-a para um novo vetor. Ao final, o programa deve imprimir as palavras separadas, uma palavra por linha. Dicas: i) faça uma função para identificar o fim e/ou o início de cada substring em linha; e, ii)utilize o modo de leitura apresentado no exemplo-15.c.

#include <stdio.h>

void separa_string(char linha[80]);

int main(){
    char c, linha[80];
    int i = 0;

    while ((c = getchar()) != '\n'){
        linha[i] = c;
        i++;
    }

    linha[i] = '\0';    

    separa_string(linha);

    return 0;
}

void separa_string(char linha[80]){
    char vetor[80][80];
    int j = 0, k = 0;

    for (int i = 0; linha[i] != '\0'; i++){
        
        if (linha[i] != ' '){
            vetor[j][k] = linha[i];
            k++;
        }
        else{
            vetor[j][k] = '\0';
            j++;
            k = 0;
        }
    }

    vetor[j][k] = '\0';

    for (int i = 0; i <= j; i++){
        printf("%s\n", vetor[i]);
    }
}