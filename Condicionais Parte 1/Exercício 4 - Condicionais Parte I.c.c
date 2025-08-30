
#include <stdio.h>
int main()
{
    float base;
    float altura;
    float perimetro;
    float area;
    float aux;

    printf("Insira um dos lados (base) do retangulo: ");
    scanf("%f", &base);

    printf("\nInsira o outro lado (altura) do retangulo: ");
    scanf("%f", &altura);

        perimetro=2*base+2*altura;
        area=base*altura;

            printf("\n\n\tPerimetro = %.2f", perimetro);
            printf("\n\tArea= %.2f", area);

            if(perimetro>area)
                printf("\n\nO Perimetro e MAIOR que a area\n\n");
            else if(area>perimetro)
                printf("\n\nA Area e MAIOR que o Perimetro\n\n");
            else
                printf("\n\nO Perimetro e IGUAL a Area\n\n");

return 0;
}
