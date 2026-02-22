/*Você deve fazer um programa que lê de um arquivo-texto uma quantidade indeterminada de caracteres e os insere em ordem crescente em duas listas simplesmente encadeada com cabeça, uma para vogais e outra para consoantes. Ao final, grave o conteúdo das listas encadeadas em um arquivo-texto.

O que será avaliado?
1. As criações das listas e a definição da struct (valor: 2 pontos)
2. A leitura da quantidade indeterminada de caracteres do arquivo (valor: 3 pontos)
3. A alocação de cada célula e a inserção em ordem nas listas (valor: 3 pontos)
4. A gravação dos caracteres no arquivo (valor: 2 pontos)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct abc{
    char letra;
    struct abc *prox;
};

typedef struct abc alfabeto;

alfabeto *cria();
void carrega(alfabeto *vogais, alfabeto *consoantes);
void salva(alfabeto *vogais, alfabeto *consoantes);

int main(){
    alfabeto *vogais, *consoantes;

    vogais = cria();
    consoantes = cria();
    carrega(vogais, consoantes);
    salva(vogais, consoantes);

    return 0;
}


alfabeto *cria(){
    alfabeto *lista;

    lista = (alfabeto *)malloc(sizeof(alfabeto));
    lista->prox = NULL;
    
    return lista;
}

void carrega(alfabeto *vogais, alfabeto *consoantes){
    FILE *arquivo;
    alfabeto *novo, *p; 

    arquivo = fopen("entrada.txt", "r");
        if(arquivo == NULL){
            printf("Erro ao abrir arquivo\n");
            return;
}

    while (1){
        novo = (alfabeto *)malloc(sizeof(alfabeto));
        if(novo == NULL)
            break;

        if(fscanf(arquivo, " %c", &novo->letra) != 1){
            free(novo);
            break;
        }
    

        novo->prox = NULL;
            
        if(novo->letra == 'A' || novo->letra == 'E'|| novo->letra == 'I' || novo->letra == 'O' || novo->letra == 'U'){
           p = vogais;
        } else p = consoantes;
        
        while (p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo;

    }

    fclose(arquivo);
}

void salva(alfabeto *vogais, alfabeto *consoantes){
    FILE *arquivo;
    alfabeto *p;

    arquivo = fopen("saida.txt", "w");

    fprintf(arquivo, "Vogais:\n");
    for(p = vogais->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%c\n", p->letra);
    }

    fprintf(arquivo, "Consoantes::\n");
    for(p = consoantes->prox; p != NULL; p = p->prox){
        fprintf(arquivo, "%c\n", p->letra);
    }

    fclose(arquivo);
}