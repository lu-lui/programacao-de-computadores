// Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X. 

#include <stdio.h>

int main(){
    int R[5], S[10], X[5], a=0;

    printf("Preencha o vetor R: \n");
    for (int i = 0; i < 5; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &R[i]);
    }

    printf("Preencha o vetor S: \n");
    for (int i = 0; i < 10; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &S[i]);
    }

    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 10; i++){
            if (R[j] == S[i]){
                X[a] = R[j];
                a++;
            }
        }
    }
 
    printf("\nVetor X com os valores iguais de R e S: ");
    for (int i = 0; i < a; i++){
        printf("%d ", X[i]);
    }
    
    return 0;
}

