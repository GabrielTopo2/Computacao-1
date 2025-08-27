#include <stdio.h>
#include <math.h>
int main() {
//a, p, g, h, 
	char opcao;
	float ma, mp, mg, mh;
	float j, k, l;

    printf("Qual tipo de media (a, p, g, h)? ");
	scanf(" %c", &opcao);

	printf("Digite os tres valores:\n");
	scanf("%f", &j);
	scanf("%f", &k);
	scanf("%f", &l);
    
    ma = ((j+k+l)/3.0);
	mp = ((j*1 + k*2 + l*3) / 6.0);
	mg = pow((j*k*l), (1.0/3));
	mh = (3.0 / (1/j+1/k+1/l));
	
	if(opcao == 'a' || opcao == 'A')
		printf("Media Aritmetica: %f", ma);
	else if(opcao == 'p' || opcao == 'P')
		printf("Media Ponderada: %f", mp);
	else if(opcao == 'g' || opcao == 'G')
		printf("Media Geometrica: %f", mg);
	else
		printf("media Harmonica: %f", mh);

	return 0;
}