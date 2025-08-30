#include <stdio.h>
int main()
{
    float base;
    float altura;
    float perimetro;
    float area;

    printf("Insira um dos lados (base) do retangulo: ");
    scanf("%f", &base);

    printf("\nInsira o outro lado (altura) do retangulo: ");
    scanf("%f", &altura);

        perimetro=2*base+2*altura;
        area=base*altura;

            printf("\n\n\tPerimetro = %.2f", perimetro);
            printf("\n\tArea= %.2f\n", area);

            if(perimetro>area)
                printf("\nO perimetro e MAIOR que a area\n\n");
return 0;
}
