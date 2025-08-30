#include <stdio.h>
int main()
{
    int alunos;
    int monitores;
    int aux;

    printf("Insira a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("\nInsira a quantidade de monitores: ");
    scanf("%d", &monitores);

        aux = alunos+monitores;

            if (aux<=50)
                printf("\nEh possivel levar todos os alunos e monitores em uma unica viagem\n\n");
            else
                printf("\nNao eh possivel levar todos os alunos e monitores em uma unica viagem\n\n");

return 0;
}
