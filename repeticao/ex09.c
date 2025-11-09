//9. Escreva um programa em C para ler as notas de 2 avaliações de uma quantidade indeterminada de alunos. Calcular e escrever a média semestral de cada aluno. O programa deve ser encerrado ao ser fornecido para a nota da primeira avaliação um valor negativo (nesta situação a segunda nota não deve ser lida). 

#include <stdio.h>

int main(){
    float nota1, nota2;

    do{
        printf("Nota 1: ");
        scanf("%f", &nota1);

        if (nota1 < 0)
            break;
        
        printf("Nota 2: ");
        scanf("%f", &nota2);

        printf("Media do aluno: %.2f \n", (nota1 + nota2) / 2);

    } while (nota1 > 0);

    return 0;
}