//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 1
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 50

struct livro{
    char titulo[80];
    char autor[50];
    char codigo[20];
    int ano;
} info_livro[MAX_LIVROS];

void cria_lista(void);
int exibir_menu(void);
void inserir(void);
void listar(void);
void buscar(void);
void excluir(void);

int main(){
    int opcao;

    for (;;) {
		opcao = exibir_menu();
		switch (opcao) {
		case 1:
			insere();
			break;
		case 2:
			apaga();
			break;
		case 3:
			imprime();
			break;
		case 4:
			exit(0);
			break;
		}
	}

    cria_lista();

    return 0;
}

int exibir_menu(void){
	int c = 0;
	do {
		printf("-- MENU:\n");
		printf("\t 1. Inserir livro\n");
		printf("\t 2. Listar livros\n");
		printf("\t 3. Buscar por Título\n");
        printf("\t 4. Editar livro\n");
		printf("\t 5. Excluir livro\n");
        printf("\t 6. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 6);
	getchar();
	return c;
}

void cria_lista(void){ //ve se a lista está cheia
	int i;
	for (i = 0; i < MAX_LIVROS; i++)
		info_livro[i].titulo[0] = '\0';
}

int exibir_menu(void){
 
    
}
void inserir(void){


}
void listar(void){


}
void buscar(void){


}
void excluir(void){


}

