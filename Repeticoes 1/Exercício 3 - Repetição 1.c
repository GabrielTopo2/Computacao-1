#include <stdio.h>
int main(){

    int n, i=0;
    float n1,n2,n3,mp;

    printf("Insira a quantidade de Casos de Teste: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nDigite as tres notas que deseja calcular a media ponderada:\n");
        scanf("%f\n%f\n%f", &n1,&n2,&n3);

        mp=((n1*2+n2*3+n3*5)/10);

        printf("\nMedia dessas tres notas eh:%.2f\n\n", mp);
    }

return 0;
}
