//Ler uma matriz A de L linhas por C colunas. Gerar e imprimir uma matriz T transposta de A

#include <stdio.h>

int main(){
    
    int L, C;

    printf("Gere a matriz transposta de A: \nNumero de linhas: ");
    scanf("%d", &L);
    
    printf("Numero de colunas: ");
    scanf("%d", &C);

    int M[L][C], MT[C][L];

    printf("Preencha a matriz: \n");
    for (int l = 0; l < L; l++){
        for (int c = 0; c < C; c++){
            printf("Linha %d e Coluna %d; ", l+1, c+1);
            scanf("%d", &M[l][c]);
        }
    }
    
    
    /*for (int l = 0; l < L; l++){
        for (int c = 0; c < C; c++){
            printf("%d ", M[l][c]);
        }
        printf("\n");
    }*/

    for (int c = 0; c < L; c++){
        for (int l = 0; l < C; l++){
            MT[l][c] = M[l][c];
        }
        
    }
    

    for (int c = 0; c < C; c++){
        for (int l = 0; l < L; l++){
            printf("%d ", MT[L][C]);
        }
        printf("\n");
    }
    

}