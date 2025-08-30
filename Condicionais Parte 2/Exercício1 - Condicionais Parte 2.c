//Faça um programa que leia do teclado um ano e imprima na tela se ele é ou não bissexto. Obs.: um ano será bissexto
//se: (a) for divisível por 400 OU (b) se for divisível por 4 e não o for por 100. Você deve fazer este exercício usando
//apenas apenas uma estrutura if-else. Dica: explore o uso dos operadores lógicos

#include <stdio.h>
int main()
{
    int a;
    int b,c,d;

    printf("Insira o numero do Ano: ");
    scanf("%d", &a);

    b=a%400;
    c=a%4;
    d=a%100;

    if (b==0 || (c==0 && d!=0))
    printf("Ano Bissexto");
    else
    printf("Ano nao Bissexto");

    return 0;
}
