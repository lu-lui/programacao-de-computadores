// 14. Ler um vetor de até 20 elementos. A leitura deverá ser executada até que o vetor fique preenchido, ou seja informado um valor negativo ou zero. Ler 2 valores que representam 2 posições (índices) no vetor (aceitar apenas índices válidos), escrever os valores nas posições entre estes índices (inclusive). 

#include <stdio.h>

int leValor(int a, int b){
    scanf("%d", &a);

    while (a < 0 || a > b){
        printf("Valor invalido, digite um indice entre 0 e %d (inclusive): ", b);
        scanf("%d", &a);
    }
    return a;
}

int main(){
    int V[20], i, x=0, y=0; 

    for (i = 0; i < 20; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &V[i]);
        
        if (V[i] < 1)
            break;  
    }

    printf("Escolha duas posicoes no vetor: \nPosicao 1: ");
    x = leValor(x, i);

    printf("Posicao 2: ");
    y = leValor(y, i);

    while (y <= x){
        if (x == y){
            printf("Valor invalido, insira um valor diferente do digitado na Posicao 1: ");
            y = leValor(y, i);
        } else {
            printf("Valor invalido, insira um valor diferente do digitado na Posicao 1: ");
            y = leValor(y, i);
        }
    }
    
    printf("Valores entre os indices %d e %d: ", x, y);
    if (x < y){
        for (int i = x; i <= y; i++){
            printf("%d ", V[i]);
        }   
    } 

    return 0;
}