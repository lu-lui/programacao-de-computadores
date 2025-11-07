// Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu).

#include <stdio.h>

int main(){
    int ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);

    if (2025 - ano >= 18)
        printf("Voce podera votar esse ano!");
    else
        printf("Voce NAO podera votar esse ano!");
    
}