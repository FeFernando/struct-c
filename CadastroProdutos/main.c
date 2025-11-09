#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char nome[30];
	float preco;
	int estoque;
}Produtos;
int main(int argc, char *argv[]) {
	Produtos produto[100];
	int choice, i;
	int qtd = 0;
	do {
		
		printf("1 - Cadastrar produto\n 2 - Listar produtos cadastrados\n 3 - Buscar produto pelo nome\n 4 - Atualizar estoque de um produto\n 5 - Sair \n");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
			 
				printf("Nome do produto: ");
				scanf("%s", produto[qtd].nome);
				printf("Digite o preco do produto: ");
				scanf("%f", &produto[qtd].preco);
				printf("Digite a quantidade no estoque: ");
				scanf("%d", &produto[qtd].estoque);
				qtd++;
				break;
			case 2: 
				printf("Lista de produtos\n");
				for (i = 0; i < qtd; i++){
					printf("Nome: %s Preco: %f Estoque: %d\n", produto[i].nome, produto[i].preco, produto[i].estoque);
				}
				
			
		}
	}while(choice != 3);
	
	
	return 0;
}
