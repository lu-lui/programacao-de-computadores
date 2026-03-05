// 6. Escreva um programa em C para ler uma quantidade indeterminada de temperaturas em graus Celsius. Para cada temperatura fornecida escrever a correspondente em graus Fahrenheit. Após a impressão de cada conversão exibir a pergunta “Nova temperatura (1.sim 2.não)?”. Se o usuário responder com o valor 2 o programa deve ser encerrado, caso contrário deverá ler outra temperatura em Celsius. 

#include <stdio.h>
#include <stdlib.h>

void converte();
int escolha();

int main(){
    int opcao=1;

    do{
        switch (opcao){
            case 1:
                converte();
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

void converte(){    
    float nova_temp, temp;

    printf("Temperatura em Celcius: ");
    scanf("%f", &temp);

    nova_temp = (temp * 1.8) + 32;

    printf("A temperatura %.1f °C é igual a %.1f °F\n", temp, nova_temp);
}

int escolha(){
    int opcao;

    printf("Nova temperatura?\n1.Sim\t2.Não\n");
    scanf("%d", &opcao);

    return opcao;
}