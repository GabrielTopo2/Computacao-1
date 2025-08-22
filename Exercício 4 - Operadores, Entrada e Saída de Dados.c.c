#include <stdio.h>
int main()
{
    int variavel_1;
    float variavel_2;
    char caractere;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &variavel_1);

    printf("\nDigite um caractere: ");
    scanf(" %c", &caractere);

    printf("\nInsira um numero de ponto flutuante (valor nao inteiro): ");
    scanf("%f", &variavel_2);

        printf ("\n\n\tValores inseridos: %d, %c, %f \n\n", variavel_1, caractere, variavel_2);

return 0;
}
