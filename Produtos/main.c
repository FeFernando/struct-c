#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX 100

typedef struct {
	char nome[25];
	float preco;
	int quantidade;
}Produtos;
int main(int argc, char *argv[]) {
	int choice;
	int qtd = 0, i;
	Produtos produto[MAX];
	
	while (1){
		printf("Escolha uma opcao \n ");
		printf(" 1- Cadastrar produto\n");
		printf("  2- Ver lista de produtos\n");
		scanf("%d", &choice);
		
		if (choice == 1){
			if (qtd >= MAX){
				printf("Limite de produtos atingidos!");
				continue;
			}
			printf("======CADASTRO DE PRODUTO======\n");
			printf("Digite o nome do produto: ");
			scanf("%s", produto[qtd].nome );
			printf("Digite o preco do produto: ");
			scanf("%f", &produto[qtd].preco);
			printf("Digite a quantidade: ");
			scanf("%d", &produto[qtd].quantidade);
			qtd++;
			
		} else if (choice == 2){
			printf("======LISTA DE PRODUTOS======\n");
			for (i = 0; i < qtd; i++){
				printf("Produto: %s    Preco: %.2f    Quantidade: %d    \n", produto[i].nome, produto[i].preco, produto[i].quantidade);
			}
			
		}
		
		
	}
	
	return 0;
}
