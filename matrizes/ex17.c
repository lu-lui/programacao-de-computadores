// 17. Ler uma matriz n x n que representa a distância existente entre n cidades entre si. A seguir ler um vetor de tamanho m, com os códigos das cidades de um trajeto. Escrever a distância total percorrida. 

#include <stdio.h>

int main(){
    int n, m;
    int total = 0;

    printf("Quantidade de cidades a serem analizadas:\n");
    scanf("%d", &n);
    int distancia[n][n];

    printf("Digite a matriz de distancias:\n");
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            scanf("%d", &distancia[l][c]);
        }
    }

    printf("Numero de cidades no percorridas:\n");
    scanf("%d", &m);

    int caminho[m];

    printf("Digite o trajeto:\n");
    for(int i = 0; i < m; i++){
        scanf("%d", &caminho[i]);
    }

    for(int i = 0; i < m-1; i++){
        total += distancia[caminho[i]][caminho[i+1]];
    }

    printf("Distancia total percorrida: %d\n", total);

    return 0;
}