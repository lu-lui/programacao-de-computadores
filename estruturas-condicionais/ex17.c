/*17. Escreva um programa para ler as 4 notas obtidas por um aluno em 4 avaliações. Calcular a média usando a seguinte fórmula: Média= (N1 + N2 ∗ 2 + N3 ∗ 3 + N4) / 7. A seguir imprima a média e o conceito do aluno baseado na seguinte tabela:
    A: 9,0 ou acima de 9,0 
    B: entre 7,5 (inclusive) e 9,0 
    C: entre 6,0 (inclusive) e 7,5 
    D: Abaixo de 6,0*/

    #include <stdio.h>
    
    int main(){
        float n1, n2, n3, n4, media;
    
        printf("Calculo de media do aluno \nNota 1: ");
        scanf("%f", &n1);

        printf("Nota 2: ");
        scanf("%f", &n2);

        printf("Nota 3: ");
        scanf("%f", &n3);

        printf("Nota 4: ");
        scanf("%f", &n4);

        media = (n1 + n2 * 2 + n3 * 3 + n4) / 7;

        printf("Media do aluno: %.2f \n", media);

        if (media >= 9)
            printf("Conceito: A");
        else if (media >= 7.5)
            printf("Conceito: B");
        else if (media >= 6)
            printf("Conceito: C");
        else
            printf("Conceito: D");
    }

