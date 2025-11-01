#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char marca[25];
	float valor;
	int ano;
}Carros;

#define MAX 1000


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	Carros carro[MAX];
	int opcao, i;
	int qtd = 0;
	
	
	do{
		printf("======CADASTRO DE CARRO======\n");
		printf("Escolha o que deseja fazer: \n");
		printf("1 - Cadastrar um carro\n");
		printf("2 - Ver lista de carros\n");
		printf("3 - Sair\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: 
				printf("'\n");
				printf("'\n");
				printf("Digite a marca do carro: ");
				scanf("%s", carro[qtd].marca);
				printf("Digite o valor do carro: ");
				scanf("%f", &carro[qtd].valor);
				printf("Digite o ano do carro: ");
				scanf("%d", &carro[qtd].ano);
				qtd++;
				break;
			case 2:
				printf("'\n");
				printf("'\n");
				printf("Informações: \n");
				for (i = 0; i < qtd; i++){
					printf("Marca: %s Valor: %.2f Ano: %d\n", carro[i].marca, carro[i].valor, carro[i].ano);
				}
				
				break;
		}
		
	} while (opcao != 3);
	
	
	
	
	
	
	
	
	return 0;
}
