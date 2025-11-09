// Escreve um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo será encerrado imediatamente após a leitura de um valor NULO ou NEGATIVO.

#include <stdio.h>

int main(){
    int numero;

    do{
        printf("Digite numero: ");
        scanf("%d", &numero);

        if (numero <= 0)
            break;

        if (numero % 2 == 0)
            printf("NUMERO PAR\n");
        else 
            printf("NUMERO IMPAR\n");
    } while (numero > 0);

    return 0;
}