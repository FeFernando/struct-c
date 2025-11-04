#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char nome[30];
	float preco;
	int estoque
}Produtos;
int main(int argc, char *argv[]) {
	Produtos produto;
	int choice;
	do {
		
		printf("1 - Cadastrar produto\n 2 - Listar produtos cadastrados\n 3 - Buscar produto pelo nome\n 4 - Atualizar estoque de um produto\n 5 - Sair");
		break;
		
	}while(choice != 3);
	
	
	return 0;
}
