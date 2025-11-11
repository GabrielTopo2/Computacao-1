#include <stdio.h>
#include <string.h>

int vogal(char *palavra)
{
    //pegar primeiro termo
    char n1=*palavra;
    
    if(n1=='a'||n1=='e'||n1=='i'||n1=='o'||n1=='u'||n1=='A'||n1=='E'||n1=='I'||n1=='O'||n1=='U')
        return 1;
}

int consoante(char *palavra)
{
    int ehletra, ehconsoante;
    //pegar último termo
    char n2=palavra[strlen(palavra)-1];
    
    //verificar se é realmente uma letra
    if(n2>='a'&&n2<='z' || n2>='A'&&n2<='Z')
        ehletra=1;
    
    if(!(n2=='a'||n2=='e'||n2=='i'||n2=='o'||n2=='u'||n2=='A'||n2=='E'||n2=='I'||n2=='O'||n2=='U'))
        ehconsoante=1;
        
    if(ehletra==1 && ehconsoante==1)
        return 1;
}

void inverter(char *palavra)
{
   int i, j;
   char temp, n=strlen(palavra);
   
   for(i=0,j=n-1; i<j; i++,j--)
   {
       temp=palavra[j];
       palavra[j]=palavra[i];
       palavra[i]=temp;
   }
}

int main()
{
    int i,j, teste_vogal, teste_consoante;
    char original[3][3][50];
    char modificada[3][3][50];
    char palavra[50];
    char palavra_invertida[50];
    
    printf("O seguinte programa colocara 9 'termos' digitados em uma matriz 3x3.\n");
    printf("As palavras que comecarem com vogal E terminarem com consoante serao invertidas.\n\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Digite a string da posição [%d][%d]: ",i,j);
            scanf("%49s", palavra);
            
            strcpy(original[i][j], palavra);
            
            //verivicar se a palavra deve ser invertida
            teste_vogal=vogal(palavra);
            teste_consoante=consoante(palavra);
            
            //"se começa com vogal e termina com consoante"
            if(teste_vogal==1 && teste_consoante==1)
            {
                inverter(palavra);
                strcpy(modificada[i][j], palavra);
            }
            else
            //atribuir à matriz modificada sem inverter
                strcpy(modificada[i][j], palavra);
        }
    }
    
    printf("\n\t---Matriz original---\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%s", original[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\t---Matriz modificada---\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%s", modificada[i][j]);
        }
        printf("\n");
    }

    return 0;
}
