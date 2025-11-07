// Escreva um programa para ler as notas das duas avaliações de um aluno no semestre, calcular e escrever a média semestral e uma mensagem indicando se ele foi aprovado, reprovado ou está em exame.


#include <stdio.h>

int main(){
    float n1, n2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7)
        printf("Media: %.2f \nSituação: APROVADO", media);
     else if (media >= 3)
        printf("Media: %.2f \nSituação: EXAME", media);
     else 
        printf("Media: %.2f \nSituação: REPROVADO", media);
    
}