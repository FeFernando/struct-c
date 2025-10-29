#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char marca[25];
	float valor;
	int ano;
}Carros;


int main(int argc, char *argv[]) {
	Carros carro;
	
	printf("Digite a marca do carro: ");
	scanf("%s", carro.marca);
	
	printf("Informações: \n");
	printf("Marca: %s", carro.marca);
	
	return 0;
}
