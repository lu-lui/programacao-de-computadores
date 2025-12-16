//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 1
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 2

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
void excluir(livro *info);
void editar(livro *info);
void remover_n(char str[]);

int main(){
	setlocale(LC_ALL, "");

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
			excluir(&info);
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
		printf("\n====== MENU ======\n");
		printf("1. Inserir livro\n");
		printf("2. Listar livros\n");
		printf("3. Buscar por título\n");
		printf("4. Editar livro\n");
		printf("5. Excluir livro\n");
		printf("6. Sair\n");
		printf("==================\n");
		printf("Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 6);
	getchar();
	return c;
}

void inserir(livro *info){
	int c = info->contador_livros;
	
	if (c >= MAX){
		printf("\tACERVO CHEIO! \nN?o é possível adicionar mais livros\n");
		return;
	}

	printf("\tRegistro %d\n", info->contador_livros);
	printf("Título: ");
	fgets(info->titulos[c], 80, stdin);
	remover_n(info->titulos[c]);

	printf("Autor: ");
	fgets(info->autores[c], 50, stdin);
	remover_n(info->autores[c]);

	printf("Código: ");
	fgets(info->codigos[c], 20, stdin);
	remover_n(info->codigos[c]);

	printf("Ano de lançamento: ");
	scanf("%d", &info->anos[c]);
	getchar();
	info->contador_livros++;
}

void listar(livro *info){
	int c = info->contador_livros;

	if (c == 0){
		printf("\tN?o há livros no acervo!\n");
		return;
	}
		
	for (int i = 0; i < c; i++){
		printf("\n\tRegistro %d:\n", i);
		printf("Título: %s\n", info->titulos[i]);
		printf("Autor: %s\n", info->autores[i]);
		printf("Código: %s\n", info->codigos[i]);
		printf("Ano: %d\n", info->anos[i]);
	}	
}

void buscar(livro *info){
	char titulo[80];
	int existe=0;
	
	printf("Insira o título que deseja procurar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (int i = 0; i < info->contador_livros; i++){
		if (strcmp(titulo, info->titulos[i]) == 0){
			printf("\tLivro encontrado:\n");
			printf("Título: %s\n", info->titulos[i]);
			printf("Autor: %s\n", info->autores[i]);
			printf("Código: %s\n", info->codigos[i]);
			printf("Ano: %d\n", info->anos[i]);
			existe++;
			return;
		}
	}

	if (existe == 0)
		printf("\tO livro n?o foi encontrado\n");
}

void editar(livro *info){
	char titulo[80];
	int existe=0;

	printf("Insira o título que deseja editar: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (int i = 0; i < info->contador_livros; i++){
		int escolha;

		if (strcmp(titulo, info->titulos[i]) == 0){
			printf("\tQue dado você gostaria de alterar?: \n1. Título \n2. Autor \n3. Código \n4. Ano\n");
			printf("Digite sua escolha: ");
			scanf("%d", &escolha);
			getchar();

			switch (escolha){
			case 1:
				printf("Novo título: ");
				fgets(info->titulos[i], 80, stdin);
				remover_n(info->titulos[i]);
				break;

			case 2:
				printf("Novo nome do autor: ");
				fgets(info->autores[i], 50, stdin);
				remover_n(info->autores[i]);
				break;

			case 3: 
				printf("Novo código: ");
				fgets(info->codigos[i], 20, stdin);
				remover_n(info->codigos[i]);
				break;

			case 4:
				printf("Novo ano de lançamento: ");
				scanf("%d", &info->anos[i]);
				getchar();
				break;
			
			default:
				printf("Opç?o inválida\n");
				break;
			}
			
			if (escolha >=1 && escolha <=4){
				printf("Alteraç?o concluída!\n");
				existe++;
			}
				
		}
	}

	if(existe ==0)
		printf("\nTítulo n?o encontrado\n");
}


void excluir(livro *info){
	char titulo[80];
	int existe=0;
	
	printf("Insira o título que deseja excluir: ");
	fgets(titulo, sizeof(titulo), stdin);
	remover_n(titulo);

	for (int i = 0; i < info->contador_livros; i++){
		if (strcmp(titulo, info->titulos[i]) == 0){
			for (int j = i; j < info->contador_livros-1; j++){
				strcpy(info->titulos[j], info->titulos[j+1]);
				strcpy(info->autores[j], info->autores[j+1]);
				strcpy(info->codigos[j], info->codigos[j+1]);
				info->anos[j] = info->anos[j+1];
				existe++;
			}
			printf("\tLivro excluído com sucesso!\n");
			info->contador_livros--;
			return;
		}
	}

	if (existe == 0)
		printf("\tO livro n?o foi encontrado\n");

}

void remover_n(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
}