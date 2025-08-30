//Tarefa: Você deve escrever um programa que, dados o preço do litro de álcool, o preço do litro de gasolina e os
//quilômetros por litro que um carro bi-combustível realiza com cada um desses combustíveis, determine se é mais
//econômico abastecer os carros da CTT com álcool ou com gasolina. No caso de não haver diferença de custo entre
//abastecer com álcool ou gasolina a CTT prefere utilizar gasolina.
//•Entrada: A entrada é composta por quatro números reais, A, G, Rae Rg, representando respectivamente o preço
//por litro do álcool, o preço por litro da gasolina, o rendimento (km/l) do carro utilizando álcool e o rendimento
//(km/l) do carro utilizando gasolina.
//•Saída: Escrever o caractere ’A’ se é mais econômico abastecer a frota com álcool ou o caractere ’G’ se é mais
//econômico ou indiferente abastecer a frota com gasolin


#include <stdio.h>
int main()
{
    float kma, kmg, a, g;
    float renda, rendg;

    printf("Preco da Gasolina: ");
    scanf("%f", &g);
    printf("Preco do Alcool: ");
    scanf("%f", &a);
    printf("Km por Litro de Gasolina: ");
    scanf("%f", &kmg);
    printf("Km por Litro de Alcool: ");
    scanf("%f", &kma);

    rendg=(kmg/g);
    renda=(kma/a);

    if (renda>rendg)
    printf("A");
    else
    printf("G");

    return 0;
}
