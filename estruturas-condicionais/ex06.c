/*Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234. Deve ser impressa uma das seguintes mensagens:
-ACESSO PERMITIDO caso a senha seja válida.
-ACESSO NEGADO caso a senha seja inválida.*/

#include <stdio.h>

int main(){
    int senha = 1234, tentativa;

    printf("Digite a senha: ");
    scanf("%d", &tentativa);

    if (tentativa == senha)
        printf("ACESSO PERMITIDO");
    else
        printf("ACESSO NEGADO");
    
}