//Faça um programa que dados os coeficientes (a,b e c) de uma equação do 2o grau, calcule e imprima suas raízes (caso
//a equação possua raízes imaginárias, o programa não deve imprimir nada)

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta;
    float x1, x2;

    printf("Insira os coeficientes a, b, c: \n");
    scanf("\n%f\n%f\n%f", &a, &b, &c);

    delta=((b*b)-(4*a*c));

    x1=(-b+sqrt(delta)) / 2*a;
    x2=(-b-sqrt(delta)) / 2*a;

    if(delta>=0)
    printf("Raizes da equacao: \n x1 = %.2f \n x2 = %.2f", x1, x2);

    return 0;
}
