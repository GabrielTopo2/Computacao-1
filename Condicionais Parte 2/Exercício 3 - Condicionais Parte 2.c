#include <stdio.h>
#include <math.h>
int main() {

	float a, b, c;
	float d, e, f;

	printf("Insira os valores correspondentes aos lados do triangulo:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	d = a+b;
	e = b+c;
	f = a+c;

	//verificar se C) triangulo, todas condiC'C5es satisfeitas
	if (a<e && b<f && c<d)
	{
		printf("eh triangulo");
		if (a==b && b==c)
			printf("\neh equilatero");
		else if (a!=b && b!=c)
			printf("\neh escaleno");
		else
			printf("\neh isoceles");
	}
	else
		printf("NAO eh triangulo");

	return 0;
}
