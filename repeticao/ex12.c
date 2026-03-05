//12. Acrescenta a mensagem "Novo cálculo (1.sim 2.não)" no fim do programa do exercício anterior de forma a permitir que o usuário possa informar novos dados para o cálculo da divisão. 

#include <stdio.h>

int main(){
    float numerador, denominador;
    int opcao=1;

    do{
        printf("DIVISAO DE NUMEROS: \nNumerador: ");
        scanf("%f", &numerador);
        
        printf("Denominador: ");
        scanf("%f", &denominador);

        while (denominador == 0){
            printf("O denominador nao pode ser nulo, digite novamente. \nDenominador:");
            scanf("%f", &denominador);
        }
        
    printf("Resultado da divisao: %.2f\n", numerador / denominador); 

    printf("Novo cálculo \n1.SIM\t2.NÃO\n");
    scanf("%d", &opcao);
    while (opcao != 1 && opcao != 2){
            printf("Opção inválida, tente novamente:\n");
            scanf("%d", &opcao);
        }
    } while (opcao == 1);      
    
    return 0;
}