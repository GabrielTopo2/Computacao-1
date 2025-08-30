#include<stdio.h>
int  main()
{
    float n1 , n2 , aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    aux=(n1+n2);

    printf("\n\tValor n1 + Valor n2 = %.2f \n\n", aux);
    printf("Valor n1 = %.2f \n", n1);
    printf("Valor n2 = %.2f \n", n2);

        printf("\n\nObservacao: Ao remover os comandos de leitura, o programa deixa de possuir o espaco para o usuario inserir dados. Portanto, sem nenhum dado associado as variaveis, o programa simplesmente imprime todas as linhas printf na tela\n\n");

return 0;
}
