#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 100

typedef struct {
	char nome[50];
	int idade;
	float peso;
}Pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa pessoa[MAX];
	int choice, i;
	int qtd = 0;
	
	
	while(1){
	
	printf("Escolha uma opção:\n ");
	printf("1 - Cadastrar pessoa\n");
	printf(" 2 - Ver lista de pessoas\n");
	scanf("%d", &choice);
	
	if (choice == 1){
		
		if (qtd >= MAX) {
			printf("Limite de cadastro atingido");
			continue;
		}
		printf("=======CADASTRO DE PESSOA======\n");
		printf("Digite o nome: ");
		scanf("%s", pessoa[qtd].nome);
		printf("Digite a idade: ");
		scanf("%d", &pessoa[qtd].idade);
		printf("Digite o peso: ");
		scanf("%f", &pessoa[qtd].peso);
		qtd++;
	} else if( choice == 2){
		printf("======LISTA DE PESSOAS CADASTRADA======\n");
		for (i = 0; i < qtd; i++){
			printf("Nome: %s - Idade: %d - Peso: kg-%.2f\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].peso);
		}
	}
	}
	
	return 0;
}
