/*22. Um mercado está vendendo frutas com a tabela de preços abaixo. Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 35,00, receberá ainda um desconto de 20 % sobre esse total. Escreva um programa para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo cliente.
    Morango: Até 5 Kg - R$ 5,00 p/Kg;  Acima de 5 Kg - R$ 4,00 p/Kg
    Maçã: Até 5 Kg - R$ 3,00 p/Kg; Acima de 5 Kg - R$ 2,00 p/Kg*/

    #include <stdio.h>

    int main(){
        float kg, soma_preco = 0, soma_kg = 0;
    
        printf("Kg de morango vendidos: ");
        scanf("%f", &kg);
        soma_kg += kg; 

        if (kg <= 5)
            soma_preco += kg * 5;
        else
            soma_preco += kg * 4;

        printf("Kg de maca vendidos: ");
        scanf("%f", &kg);
        soma_kg += kg; 

        if (kg <= 5)
            soma_preco += kg * 3;
        else
            soma_preco += kg * 2;

        if (soma_kg > 8 || soma_preco > 35)
            printf("Valor da compra: R$%.2f", soma_preco * 0.8);
        else
            printf("Valor da compra: R$%.2f", soma_preco);
    }