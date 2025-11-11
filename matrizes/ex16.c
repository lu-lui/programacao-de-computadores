// 16. Ler uma matriz 5 x 5. Trocar os elementos das colunas pares com os elementos das colunas ímpares subsequentes (0 e 1, 2 e 3, até 4 e 5). Após o término das trocas escrever a matriz. 

#include <stdio.h>

#define TAM 3

int main(){
    int M[TAM][TAM];

    printf("Matriz M:\n");
    
    for (int L = 0; L < TAM; L++)
        for (int C = 0; C < TAM; C++)
            scanf("%d", &M[L][C]);
        
    

    return 0;
}