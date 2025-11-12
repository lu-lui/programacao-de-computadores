// 28. Escreva um programa para ler um vetor de 10 palavras. A seguir ler uma letra. Copiar para outro vetor (sem deixar espaços vagos) todas as palavras que começam a letra informada. Após o término na cópia escrever o vetor gerado.


/*
#include <stdio.h>
#include <string.h>

int main(){
    char palavras[10][50], palavras_com_letra[10][50];
    char caractere, c=0;

    for (int i = 0; i < 10; i++){
        printf("Palavra %d: ", i+1);
        scanf("%c", palavras[i]);
    }
    
    printf("Digite um caractere: ");
    caractere = getchar();

    for (int i = 0; i < 10; i++){
        if (palavras[i][0] == caractere){
        

            strcpy(palavras_com_letra[c], palavras[i]);
            c++;
        }
        
    }
    
    for (int i = 0; i <= c; i++)
        printf("%s", palavras[i]);
    

    return 0;
}*/