// Modifique o programa do exercício 2 do slide 39 (Parte III), de modo a fazer o cálculo da média das notas utilizando uma função, que recebe como parâmetros as notas N1, N2 e MT, e devolve a média M. O programa verifica se o aluno atingiu a média 7 e em caso positivo, o programa imprime a mensagem “aprovado por média”. Caso contrário, o programa chama uma outra função que calcula e retorna o valor necessário na optativa, que será impresso no programa principal. 

#include <stdio.h>

float calcula_media(float n1, float n2, float MT);

float quanto_falta(float M);

int main(){
    float N1, N2, MT, M, falta;

    printf("Nota 1: ");
    scanf("%f", &N1);

    printf("Nota 2: ");
    scanf("%f", &N2);

    printf("Media dos trabalhos: ");
    scanf("%f", &MT);

    M = calcula_media(N1, N2, MT);

    if (M >= 7)
        printf("Aprovado por media\n");
    else{
        falta = quanto_falta(M);

        if (falta > 10)
            printf("Reprovado");
        else
            printf("O aluno precisa de %.1f na optativa", falta);
    }

    

    return 0;
}

float calcula_media(float n1, float n2, float MT){
    float M = (3*n1+3*n2+4*MT)/10;

    return M;
}

float quanto_falta(float M){
    float falta = 14 - M;

    return falta;
}