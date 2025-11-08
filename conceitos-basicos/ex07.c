/*7. A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um programa que leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D, calcule e escreva: a) O número de alunos reprovados na turma C. b) O número de alunos reprovados na turma D. c) A percentagem de alunos reprovados em relação ao total de alunos das duas turmas. */

#include <stdio.h>

int main(){
    int turma_c= 60, turma_d = 20, n_reprovados_c, n_reprovados_d;
    float reprovados_c, aprovados_d, reprovados_total;

    printf("Percentual de reprovados na turma C: ");
    scanf("%f", &reprovados_c);

    printf("Percentual de aprovados na turma D: ");
    scanf("%f", &aprovados_d);

    n_reprovados_c = reprovados_c * turma_c / 100;

    n_reprovados_d = (100 - aprovados_d) * turma_d / 100;

    reprovados_total = 100 * ( (float) n_reprovados_c + (float) n_reprovados_d) / ((float) turma_c + (float) turma_d);

    printf("Numero de reprovados na turma C: %d \nNumero de reprovados na turma D: %d \nPorcentagem de alunos reprovados nas duas turmas: %.2f%%", n_reprovados_c, n_reprovados_d, reprovados_total);
}