// 16. Ler uma matriz 6 x 6. Trocar os elementos das colunas pares com os elementos das colunas ímpares subsequentes (0 e 1, 2 e 3, até 4 e 5). Após o término das trocas escrever a matriz. 

#include <stdio.h>

#define TAM 6

int main(){
    int M[TAM][TAM];

    printf("Matriz M:\n");
    
    for (int L = 0; L < TAM; L++)
        for (int C = 0; C < TAM; C++)
            scanf("%d", &M[L][C]);

    printf("Matriz digitada: \n");
    for (int l = 0; l < TAM; l++){
        for (int c = 0; c < TAM; c++){
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }

    for (int L = 0; L < TAM; L++){
        for (int C = 0; C < TAM; C = C+2){
            int temp;

            temp = M[L][C];
            M[L][C] = M[L][C+1]; 
            M[L][C+1] = temp;
        }
    }
        
    printf("Matriz alterada: \n");
    
    for (int l = 0; l < TAM; l++){
        for (int c = 0; c < TAM; c++){
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}