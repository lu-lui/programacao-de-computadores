//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 1
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

typedef struct biblioteca {
    char titulos[MAX][80];
    char autores[MAX][50];
    char codigos[MAX][20];
    int anos[MAX];
    int contador_livros;
} livro;


void cria_lista(livro *info);
int exibir_menu(void);
void inserir(livro *info);
void listar(livro *info);
void buscar(void);
void excluir(void);
void editar();

int main(){
    int opcao;
	livro info;

    cria_lista(&info);

   for (;;) {
		opcao = exibir_menu();
		switch (opcao) {
		case 1:
			inserir(&info);
			break;
		case 2:
			listar(&info);
			break;
		case 3:
			buscar();
			break;
		case 4:
			editar();
			break;
		case 5:
			excluir();
			break;
		case 6:
			exit(0);
			break;
		}
	}
	return 0;
}

void cria_lista(livro *info){
	info->contador_livros=0;
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

void inserir(livro *info){
	int c = info->contador_livros;
	
	if (c >= MAX){
		printf("Acervo cheio, nao eh possivel adicionar mais livros");
		return;
	}

	printf("Registro %d", info->contador_livros);
	printf("Titulo: ");
	fgets(info->titulos[c], 80, stdin);
	getchar();
	fgets(info->autores[c], 50, stdin);
	getchar();
	fgets(info->codigos[c], 20, stdin);
	getchar();
	scanf("%d", &info->anos[c]);

	info->contador_livros++;
}

void listar(livro *info){
	int c = info->contador_livros;
	
	for (int i = 0; i <= c; i++){
		printf("\tab Registro %d:", c);
		printf("Titulo: %s", info->titulos[i]);
		printf("Autor: %s", info->autores[c]);
		printf("Codigo: %s", info->codigos[c]);
		printf("Ano: %d", info->anos[c]);
	}	
}
void buscar(void){


}
void excluir(void){


}

