#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	float peso;
	int idade;
} Pessoa;

int main(int argc, char *argv[]) {
	
	Pessoa pessoa;
	
	printf("Digite o nome da pessoa: ");
	scanf("%s", pessoa.nome);
	printf("Digite o peso da pessoa: ");
	scanf("%f", &pessoa.peso);
	printf("Digite a idade da pessoa: ");
	scanf("%d", &pessoa.idade);
	
	

	printf("Pessoa cadastrada com sucesso:\n");
	printf("Dados:\n");
	printf("Nome: %s\n", pessoa.nome);
	printf("Peso: %.2f\n", pessoa.peso);
	printf("Idade: %d\n", pessoa.idade);

	
	
	return 0;
}
