#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa pes = {25, 78, "Felipe"};
	
	printf("Idade: %d\n", pes.idade);
	printf("Peso: %.2f\n", pes.peso);
	printf("Nome: %s", pes.nome);
	
	return 0;
}
