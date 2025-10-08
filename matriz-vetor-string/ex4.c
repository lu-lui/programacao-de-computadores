//Ler um vetor C de 10 elementos inteiros. Após o término da leitura, trocar todos os valores negativos do vetor C por 0. Após todas as trocas terem sido efetuadas, escrever o vetor C. 

#include <stdio.h>

int main(){
    int C[10];

    printf("Escreva os 10 elementos do vetor C\n");
    
    for (int i = 0; i < 10; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &C[i]);
    }
    
    for (int i = 0; i < 10; i++){
        if (C[i] < 0){
            C[i] = 0;
        }
        
        printf("%d ", C[i]);
    } 
}