//DESAFIO PC: SISTEMA DE GERENCIAMENTO DE BIBLIOTECA - PARTE 1
// NOME: Luísa Passos Neutzling MATRÍCULA: 25101673

/*Para esta fase, vocˆe deve desenvolver um sistema que siga as seguintes especifica ̧c ̃oes. 

2.1 Estrutura de Armazenamento 
Os livros devem ser armazenados em estruturas est ́aticas, com capacidade m ́axima de 50 livros. Sobre cada livro, deseja-se armazenar: 
1. T ́ıtulo (char[80]): T ́ıtulo do Livro. 
2. Autor (char[50]): Nome do autor do livro. 
3. C ́odigo (char[20]): C ́odigo de registro do livro (combina ̧c ̃ao de n ́umeros com letras, por exemplo, A2B1). 
4. Ano de Publica ̧c ̃ao (int): Ano em que o livro foi publicado.

// DICA:
// A forma mais eficiente de organizar isso  ́e utilizando Matrizes Paralelas, onde a conex~ao
// entre os dados de um livro  ́e feita pelo  ́ındice em comum.
#define MAX_LIVROS 50
char titulos[MAX_LIVROS][80];
char autores[MAX_LIVROS][50];
char codigos[MAX_LIVROS][20];
int anos[MAX_LIVROS];
int contador_livros = 0; // Usado para gerenciar a pr ́oxima posi ̧c~ao livre e fazer a conex~ao entre os dados de um livro

2.2 Opera ̧c ̃oes do Sistema
O sistema deve suportar as seguintes opera ̧c ̃oes:
• Inser ̧c ̃ao: Coletar todos os atributos (T ́ıtulo, Autor, C ́odigo, Ano) via terminal. Um livro deve ser inserido na pr ́oxima posi ̧c ̃ao livre da estrutura de dados (N ̃ao devem haver “buracos” na estrutura).
• Busca: Encontrar e exibir os dados completos de um livro, pesquisando pelo T ́ıtulo.
• Exclus ̃ao: Remover um livro do sistema, buscando pelo T ́ıtulo.
• Edi ̧c ̃ao: Modificar informa ̧c ̃oes de um livro ap ́os busc ́a-lo pelo T ́ıtulo.

2.2.1 L ́ogica de Exclus ̃ao: Deslocamento (Shifting)
Para remover um livro sem deixar “buracos” na matriz (o que complica a inser ̧c ̃ao, listagem e busca),  ́e obrigat ́orio utilizar a l ́ogica de deslocamento shifting. Vocˆe deve seguir o passo a passo abaixo:
⋄ Passo 1 (Deslocar): Ap ́os encontrar o livro no  ́ındice i, inicie um la ̧co de repeti ̧c ̃ao da posi ̧c ̃ao i at ́e a  ́ultima posi ̧c ̃ao ativa.
⋄ Passo 2 (Mover): Dentro do la ̧co, copie o conte ́udo da posi ̧c ̃ao i + 1 para a posi ̧c ̃ao i em todas as matrizes paralelas (t ́ıtulos, autores, c ́odigos e anos).
⋄ Passo 3 (Ajustar): O contador de livros deve ser decrementado no final da opera ̧c ̃ao.

// EXEMPLO:
// Se o livro na Posi ̧c~ao 1 for exclu ́ıdo, o livro da Posi ̧c~ao 2 se move para a Posi ̧c~ao 1, o da
// Posi ̧c~ao 3 para a Posi ̧c~ao 2, e assim por diante.

DICA:
Tudo isso deve ser controlado pelo contador de livros.



Requisitos
A implementa ̧c ̃ao deve demonstrar o dom ́ınio dos seguintes conceitos:
1. Modulariza ̧c ̃ao: O programa deve ser organizado em fun ̧coes coesas (exibir menu, inserir, buscar,etc.).
2. Matrizes Est ́aticas: Uso de Matrizes Paralelas para o armazenamento dos dados (t ́ıtulos, autores,etc.).
3. Estruturas de Controle e Repeti ̧c ̃ao: Aplica ̧c ̃ao de if/else, switch e la ̧cos (for/while) na l ́ogica do menu, busca, edi ̧c ̃ao e exclus ̃ao.
4. Strings (<string.h>): Utiliza ̧c ̃ao das fun ̧c ̃oes de manipula ̧c ̃ao e compara ̧c ̃ao de strings (strcpy, strcmp) nos campos textuais.
5. Ponteiros Fundamentais: Aplica ̧c ̃ao de ponteiros para a passagem eficiente das matrizes/vetores e de strings para as fun ̧c ̃oes.
6. Gerenciamento de Escopo: N ̃ao utilize vari ́aveis globais. A passagem de dados e a manipula ̧c ̃ao do contador de livros deve ser feita via parˆametro de fun ̧c ̃ao (utilizando ponteiros quando necess ́ario).*/


/* PARTES JÁ FEITAS

    2.3 Menu Inicial 
O sistema deve apresentar um menu inicial interativo, que fique em loop at ́e que o usu ́ario escolha Sair. O Menu deve conter as seguintes op ̧c ̃oes:
1. Inserir Livro: Coletar e armazenar os 4 atributos. Caso a base de dados esteja cheia, enviar a mensagem: “N ̃ao  ́e poss ́ıvel adicionar mais livros. Acervo Lotado”.
2. Listar Livros: Percorrer a base de dados e exibir os dados de todos os livros do acervo. Caso ainda n ̃ao haja livros cadastrados, enviar a mensagem: “N ̃ao h ́a livros no acervo”.
3. Buscar por T ́ıtulo: Perguntar ao usu ́ario qual t ́ıtulo deve ser buscado, busc ́a-lo nas matrizes e exibir os seus atributos (caso o livro esteja no sistema). Se n ̃ao existir, enviar a mensagem: “T ́ıtulo n ̃ao encontrado”.
4. Editar Livro: Ap ́os encontrar o livro pelo T ́ıtulo, o usu ́ario deve ser perguntado especificamente sobre qual informa ̧c ̃ao deseja alterar (T ́ıtulo, Autor, C ́odigo ou Ano) e o programa deve solicitar o novo valor, alterar na base de dados e enviar uma mensagem de opera ̧c ̃ao conclu ́ıda: “Altera ̧c ̃ao Conclu ́ıda”.
5. Excluir Livro: Aplicar a l ́ogica de deslocamento para remover o registro.
6. Sair: Encerramento da execu ̧c ̃ao.

*/