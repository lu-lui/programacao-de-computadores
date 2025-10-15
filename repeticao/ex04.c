// Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). Escrever para cada dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A repetição será encerrada ao ser fornecido para os elementos da dupla valores iguais


#include <stdio.h>

int main(){
    int n1, n2;

    do{
        printf("Digite valor 1: ");
        scanf("%d", &n1);
        printf("Digite valor 2: ");
        scanf("%d", &n2);

        if (n1 < n2)
            printf("Os valores foram digitados em ordem crescente\n");
        else if (n1 > n2)
            printf("Os valores foram digitados em ordem decrescente\n");
        else
            printf("Os dois valores sao iguais\n");
    } while (n1 != n2);
    
}