// 9. Ler um vetor U de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o. com o penúltimo, etc. até o 5o. com o 6o. e escreva o vetor U assim modificado. 

#include <stdio.h>

int main(){
    int U[10], k = 9; 

    printf("Digite valores do vetor U: \n");
    
    for (int i = 0; i < 10; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &U[i]);
    }

    printf("Vetor original: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", U[i]);
    }

    for (int i = 0; i < 5; i++){
        int temp;
        temp = U[i];
        U[i] = U[k];
        U[k] = temp;
        k--;
    }
    
    printf("\nVetor modificado: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", U[i]);
    }

    return 0;
}