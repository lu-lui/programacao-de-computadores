//8. Escreva um programa em C para ler as notas de 2 avaliações de uma quantidade indeterminada de alunos. Calcular e escrever a média semestral de cada aluno. Após a impressão da média exibir a pergunta “Outro aluno (1.sim 2.não)?”. Se o usuário informar o valor 1 o programa deverá ser repetido caso contrário encerrado. 

#include <stdio.h>
#include <stdlib.h>

float nota(float n);
int escolha();

int main(){
    int opcao=1;
    float n1, n2;

    printf("Calculo de média dos alunos:\n");

    do{
        switch (opcao){
            case 1:
                printf("Nota 1: ");
                n1 = nota(n1);
                printf("Nota 2: ");
                n2 = nota(n2);
                printf("Média do aluno: %.2f\n", (n1+n2)/2);
                opcao = escolha();
                break;

            case 2:
                printf("Programa encerrado com sucesso!\n");
                exit(0);
                break;
            
            default:
                printf("Opção inválida, tente novamente: \n");
                opcao = escolha();
                break;
            }
    } while (1);
    
    return 0;
}

float nota(float n) {  
    scanf("%f", &n);

    while (n > 10 || n < 0){
        printf("Nota inválida, digite novamente: ");
        scanf("%f", &n);
    }
    
    return n;
}

int escolha(){
    int opcao;

    printf("Outro aluno?\n1.Sim\t2.Não\n");
    scanf("%d", &opcao);

    return opcao;
}