#include <stdio.h>
int main()
{
    int variavel_1;
    float variavel_2;
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &variavel_1);

    printf("\nInsira um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%f", &variavel_2);

    printf ("\n\n\tValores inseridos: %c, %d, %f \n\n", caractere, variavel_1, variavel_2);

return 0;
}
