// Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura com teste de saída no início da repetição while().

#include <stdio.h>

int main(){
    
    int numero;

    printf("Digite numero: ");
    scanf("%d", &numero);

    if (numero > 0)
        printf("NUMERO POSITIVO\n");
    else if (numero < 0)
        printf("NUMERO NEGATIVO\n");

    while (numero != 0){
        printf("Digite numero: ");
        scanf("%d", &numero);

        if (numero > 0)
        printf("NUMERO POSITIVO\n");
    else if (numero < 0)
        printf("NUMERO NEGATIVO\n");
    }

    return 0;
}