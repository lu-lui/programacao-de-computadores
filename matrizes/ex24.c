// 24. Escreva um programa para ler uma quantidade indeterminada de dupla de dados. O primeiro elemento da dupla é um dos seguintes caracteres: 'M','m', 'F' ou 'f' (não é necessário validar). O segundo é uma palavra de até 30 caracteres (considere que ela pode conter hífen). Converta cada palavra lida para maiúscula ou minúscula conforme o primeiro caractere (da dupla) informado seja 'M' (Maiúscula) ou 'm' (Minúscula). Imprimir cada palavra após a conversão. O programa termina quando o primeiro caractere informado (da dupla) for 'F' ou 'f'. 

#include <stdio.h>
#include <ctype.h>
#include  <string.h>

int main(){
    char x, y[30];

    do{
        scanf(" %c %29[^\n]", &x, y);
        if (x == 'f' || x == 'F')
            break;

        if (islower(x)){
            for (int i = 0; y[i] != '\0'; i++)
                y[i] = tolower(y[i]);
        } else{
            for (int i = 0; y[i] != '\0'; i++)
                y[i] = toupper(y[i]);
        }
            
        printf("Palavra formatada: %s\n", y);
        
    } while (1);
    
    return 0;
}