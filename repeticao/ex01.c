// Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição de ser encerrada sem imprimir mensagem alguma. Utilize do...while().

#include <stdio.h>

int main(){
    int numero;

    do{
        printf("Digite numero: ");
        scanf("%d", &numero);

        if (numero > 0)
            printf("NUMERO POSITIVO\n");
        else if (numero < 0)
            printf("NUMERO NEGATIVO\n");
    } while (numero != 0);

    return 0;
}