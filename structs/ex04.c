// 4. Crie uma estrutura para armazenar os dados de triângulos. Crie um algoritmo que permita ler, armazenar e imprimir uma quantidade TAM de triângulos. 

//base e altura ou 3 dados que se ligam?

#include <stdio.h>

typedef struct triangulo{
    float base;
    float altura;
}triangulo;

int main(){
    int TAM;

    printf("Digite a quantidade de triâgulos a ser impressa: ");
    scanf("%d", &TAM);

    triangulo dado[TAM];

    for (int i = 0; i < TAM; i++){
        printf("\tTriângulo %d: \nBase (cm): ", i+1);
        scanf("%f", &dado[i].base);
        printf("Altura (cm): ");
        scanf("%f", &dado[i].altura);
    }

    for (int i = 0; i < TAM; i++){
        printf("\tTriângulo %d: \n", i+1);
        printf("Base: %.2fcm \nAltura: %.2fcm\n\n", dado[i].base, dado[i].altura);
    }
    return 0;
}