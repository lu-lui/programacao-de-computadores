// 13. Ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique preenchido, ou seja informado um valor negativo ou zero. Calcular e imprimir a soma dos valores maiores que 5 existentes no vetor. 

#include <stdio.h>

int main(){
    int V[10], i=0, soma=0;

    printf("Preencha o vetor V: \n");
    
    for (i = 0; i < 10; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &V[i]);
        if (V[i] < 1)
            break;  
    }
    
    for (int j = 0; j <= i; j++){
        if (V[j] > 5)
            soma += V[j];  
    }
    
    printf("Soma dos valores maiores de 5 no vetor V: %d", soma);   
    
    return 0;
}