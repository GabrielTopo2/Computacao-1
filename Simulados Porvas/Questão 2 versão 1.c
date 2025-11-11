#include <stdio.h>

#define Qtd_num 2

float calculaMedia(int *vet, int T)
{
    int i;
    float m,total=0;
    
    for(i=0;i<T;i++)
        total+=vet[i];
    
    m=total/T;

    return m;
}

int main()
{
    FILE *f;
    int i,j,aux,num,T=0;
    int vet[Qtd_num];
    float media;

    f = fopen("f.txt", "w");
    for(i=1;i<=Qtd_num;i++)
    {
        printf("Insira o numero para o espaço %d: ", i);
        scanf("%d", &aux);
        fprintf(f, "%d\n", aux);
    }
    fclose(f);
    
    f = fopen("f.txt", "r");
    j=0;
    while(fscanf(f,"%d\n",&num)==1)
    {
        printf("\nLeu o numero %d", num);
        vet[j]=num;
        j++;
    }
    //T=j atribui a T a real quantidade de numeros lidos (j)
    T=j;
    fclose(f);
    
    media=calculaMedia(vet, T);
    
    printf("\n\n   ---Media = %f---", media);

    return 0;
}