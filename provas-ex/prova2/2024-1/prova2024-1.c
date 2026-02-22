/*Você deve fazer um programa que lê de um arquivo-texto uma quantidade indeterminada de pares de números inteiros, o primeiro indica a prioridade e o segundo indica o custo de realizar uma determinada tarefa.
Insira os dados de cada tarefa lidos do arquivo em ordem crescente de prioridade em uma lista simplesmente encadeada com cabeça.
Quando a tarefa tiver a mesma prioridade, o segundo critério para o ordenamento deve ser o
custo.
Ao final, grave o conteúdo da lista encadeada em um arquivo-texto.

O que será avaliado?
1. A criação da lista e a definição da struct (valor: 2 pontos)
2. A leitura da quantidade indeterminada de valores do arquivo (valor: 2 pontos)
3. A alocação de cada célula nova (valor: 1 ponto)
4. A inserção na lista na ordem apropriada (valor: 3 pontos)
5. A gravação dos valores no arquivo (valor: 2 pontos)*/

#include <stdio.h>
#include <stdlib.h>

struct tarefas{
    int prioridade;
    int custo;
    struct tarefas *prox;
} ;

typedef struct tarefas tarefa;

tarefa *cria(void);
void carrega(tarefa *lista);
void salva(tarefa *lista);

int main(){
    tarefa *lista;
    lista = cria();
    carrega(lista);
    salva(lista);

    return 0;
}

tarefa *cria(void){
    tarefa *lista;

    lista = (tarefa *)malloc(sizeof(tarefa));
    lista->prox = NULL;

    return lista;
}

void carrega(tarefa *lista){
    FILE *arquivo;
    tarefa *nova;

    fopen("entrada.txt", "r");
    if (arquivo == NULL)
        printf("Erro de abertura do arquivo/n");
    

    while (1){
        nova = (tarefa *)malloc(sizeof(tarefa));
        if(nova = NULL)
            break;
    
        if(fscanf(arquivo, "%d%d", &nova->prioridade, &nova->custo)!=2){
            free(nova);
            break;
        }

    while (nova->prox != NULL && lista->prioridade < nova->prioridade){
        nova->prox = lista->prox;
        lista->prox = nova; //insere no inicio? da lista
    }

}
    fclose(arquivo);
}

void salva(tarefa *lista){
    FILE *arquivo;
    tarefa *p;
    
    fopen("saida.txt", "w");

    for (p = lista->prox; p != NULL; p = p->prox)
        fprintf(arquivo, "%d %d\n", p->prioridade, p->custo);
    
    fclose(arquivo);
}