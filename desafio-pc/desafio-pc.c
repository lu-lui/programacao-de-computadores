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
void buscar(livro *info);
void excluir(void);
void editar(livro *info);

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
			buscar(&info);
			break;
		case 4:
			editar(&info);
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

	if (c == 0){
		printf("Nao ha livros no acervo\n");
		return;
	}
		
	for (int i = 0; i < c; i++){
		printf("\n\tRegistro %d:", i);
		printf("Titulo: %s\n", info->titulos[i]);
		printf("Autor: %s\n", info->autores[i]);
		printf("Codigo: %s\n", info->codigos[i]);
		printf("Ano: %d\n", info->anos[i]);
	}	
}

void buscar(livro *info){
	char titulo[80];
	int existe=0;
	
	printf("Insira o titulo que deseja procurar: ");
	fgets(titulo, sizeof(titulo), stdin);

	for (int i = 0; i < info->contador_livros; i++){
		if (strcmp(titulo, info->titulos[i]) == 0){
			printf("\tLivro encontrado:\n");
			printf("Titulo: %s\n", info->titulos[i]);
			printf("Autor: %s\n", info->autores[i]);
			printf("Codigo: %s\n", info->codigos[i]);
			printf("Ano: %d\n", info->anos[i]);
			existe++;
			return;
		}
	}

	if (existe == 0)
		printf("O livro não foi encontrado\n");
}

void editar(livro *info){
	char titulo[80];

	printf("Insira o titulo que deseja editar: ");
	fgets(titulo, sizeof(titulo), stdin);

	for (int i = 0; i < info->contador_livros; i++){
		int escolha;
		
		if (strcmp(titulo, info->titulos[i]) == 0){
			printf("\tQue dado voce gostaria de alterar?: \n1. Titulo\n 2. Autor\n 3. Codigo 4. Ano\n");
			scanf("%d", &escolha);

			switch (escolha){
			case 1:
				fgets(info->titulos[i], 80, stdin);
				getchar();
				break;

			case 2:
				fgets(info->autores[i], 50, stdin);
				getchar();
				break;

			case 3: 
				fgets(info->codigos[i], 20, stdin);
				getchar();
				break;

			case 4:
				scanf("%d", &info->anos[i]);
				break;
			
			default:
				printf("Opcao invalida");
				break;
			}
			
			if (escolha >=1 && escolha >=4)
				printf("Alteracao concluida");
		}
	}
}

