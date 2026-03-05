//  13. Reescreva o programa do exercício (triângulo equilátero, isósceles e escaleno) para que após a leitura dos dados ( a medida dos 3 lados do triângulo) seja impressa a mensagem “Os dados informados estão corretos (1.sim/2.não)?” solicitando ao usuário uma resposta. Caso a resposta seja 1 a execução deve continuar normalmente escrevendo o tipo de triângulo, caso contrário a leitura dos dados (a medida dos 3 lados) deverá ser repetida. 


#include <stdio.h>

float le_medidas(int *c);

int main(){
    float l1, l2, l3;
    int c, op=2;
    
    do{
        c = 1;
        l1 = le_medidas(&c);
        l2 = le_medidas(&c);
        l3 = le_medidas(&c);

        printf("Os dados estão corretos?\n1.Sim\t2.Não\n");
        scanf("%d", &op);
    } while (op != 1);
    
    if(l1 == l2 && l2 == l3)
        printf("Triângulo equilátero\n");
    else if(l1 != l2 && l2 != l3 && l3 != l1)
        printf("Triângulo escaleno\n");
    else
        printf("Triângulo isóceles\n");
    
    return 0;
}

float le_medidas(int *c){
    float lado;

    printf("Lado %d: ", *c);
    scanf("%f", &lado);
    while (lado <= 0){
        printf("Valor inválido, digite novamente: ");
        scanf("%f", &lado);
    }

    (*c)++;
    return lado;
}