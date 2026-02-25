//versão 2 prova 2024-1
//a saida tem que ser tal qual a entrada

#include <stdio.h>
#include <stdlib.h>

typedef struct tarefas{
    int prioridade;
    int custo;
    struct tarefas *prox;
}tarefa;

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
    FILE *arq;
    tarefa *novo, *p;

    arq = fopen("entrada.txt", "r");
    if(arq == NULL){
        printf("Erro de abertura");
        return;
    }

    while (1){
        novo = (tarefa *)malloc(sizeof(tarefa));
        if(novo == NULL){
            break;
        }
        novo->prox = NULL;
        p = lista;

        if(fscanf(arq, "%d%d", &novo->prioridade, &novo->custo) != 2){
            free(novo);
            break;
        }

        while (p->prox != NULL){
            p = p->prox;
        }

        p->prox = novo;
        
    }
    fclose(arq);
}
void salva(tarefa *lista){
    FILE *arq;
    tarefa  *p;

    arq = fopen("saidaaa.txt", "w");

    for(p = lista->prox; p != NULL; p = p->prox){
        fprintf(arq, "%d %d\n", p->prioridade, p->custo);
    }

    fclose(arq);
}