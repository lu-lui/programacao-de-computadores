//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 1
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 50

struct livro{
    char titulos[MAX_LIVROS][80];
    char autores[MAX_LIVROS][50];
    char codigos[MAX_LIVROS][20];
    int anos[MAX_LIVROS];
    int contador_livros = 0; //é aqui?
};

void cria_lista(void);
int exibir_menu(void);
void inserir(void);
void listar(void);
void buscar(void);
void excluir(void);


//struct livro info_livro

funcao(struct livro *info_livro){
	info_livro->titulos 
	fflush(stdin);
}



int main(){
    int opcao;
	struct livro info_livro;

    cria_lista();

    for (;;) {
		opcao = exibir_menu();
		switch (opcao) {
		case 1:
			insere(&info_livro);
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

    

    return 0;
}

void cria_lista(void){ //ve se a lista está cheia
	int i;
	for (i = 0; i < MAX_LIVROS; i++)
		info_livro[i].titulos[i][0] = '\0';
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

void inserir(void){


}
void listar(void){


}
void buscar(void){


}
void excluir(void){


}

