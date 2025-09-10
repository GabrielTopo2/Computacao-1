#include <stdio.h>
#include <math.h>


int main()
{
	int quantidade_1, quantidade_2;
	float valor;
#define G 7
#define I 9

	printf("Digite a quantidade do item 1: ");
	scanf("%d", &quantidade_1);
	printf("\nQuantidade Digitada: %d", quantidade_1);

	printf("\n\nDigite a quantidade do item 2: ");
	scanf("%d", &quantidade_2);
	printf(" \nQuantidade Digitada 2: %d", quantidade_2);


	valor=((quantidade_1 + quantidade_2)*(I-G))/2;

	if (quantidade_1<valor)
		printf("\n\nO resultado eh %.2f e as quantidades sao %d e %d", valor, quantidade_1, quantidade_2);
	else
		printf("\n\nO resultado eh %.2f e as quantidades sao %d e %d", valor*0.8, quantidade_1, quantidade_2);

	return 0;
}
