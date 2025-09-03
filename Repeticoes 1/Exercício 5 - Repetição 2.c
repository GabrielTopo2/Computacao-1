#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, chute, i=0;

    srand(time(0));
    num = rand()%500;


    while(num<chute || num>chute)
    {
    printf("Adivinhe o Numero: ");
    scanf("%d", &chute);

    if(chute>num)
        printf("Chute > Numero Sorteado\n\n");
    else if(chute<num)
        printf("Chute < Numero Sorteado\n\n");
    else
        printf("Chute = Numero Sorteado\n\nVoce Acertou!\t");
        i++;
    }

    if(i>=1 && i<=3)
    printf("|o/\n\n\n");
    else if(i>=4 && i<=6)
    printf(":-D\n\n\n");
    else if(i>=7 && i<=10)
    printf(":-)\n\n\n");
    else
    printf(":-/\n\n\n");

    return 0;
}
