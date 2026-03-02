// 27. Escreva um programa para ler um caractere e uma a frase (considere que ela possui no máximo 70 caracteres). Retire da string que contém a frase todos os caracteres iguais ao informado. Escrever a string que contém a frase após a retirada dos caracteres. 

#include <stdio.h>

int main(){
    char frase[70];
    char c;
    
    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Digite uma frase: ");
    scanf(" %69[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == c){
            int j = i;
            while (frase[j] != '\0'){
                frase[j] = frase[j+1];
                j++;
            }
        }
    }
    
    printf("Frase sem o caractere informado: \n%s\n", frase);

    return 0;
}