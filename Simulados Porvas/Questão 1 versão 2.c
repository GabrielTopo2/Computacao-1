#include <stdio.h>
#include <string.h>

int ehletra(char y)
{
    if(y>='a'&&y<='z' || y>='A'&&y<='Z')
        return 1;
    else
        return 0;
}

int vogal_consoante(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
        return 1;//<--é vogal
    else
        return 0;//<--é consoante
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
    //n1 e n2 --> primeira e ultima letra
    char n1,n2;
    char original[3][3][50], modificada[3][3][50];
    char palavra[50], palavra_invertida[50];
    int i,j, NAN1, NAN2, n1_vogal, n2_cons;
    
    printf("O seguinte programa colocara 9 'termos' digitados em uma matriz 3x3.\n");
    printf("As palavras que comecarem com vogal E terminarem com consoante serao invertidas.\n\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Digite a string da posição [%d][%d]: ",i,j);
            scanf("%49s", palavra);
            
            strcpy(original[i][j], palavra);
            
            n1=*palavra;
            n2=palavra[strlen(palavra)-1];
            
            //verificar se n1 e n2 são realmente letras (Not A Number)
            NAN1=ehletra(n1);
            NAN2=ehletra(n2);
            
            if(NAN1==1 && NAN2==1)//<--comeco e fim são letras
            {
                //verivicar se a palavra deve ser invertida
                n1_vogal=vogal_consoante(n1);
                n2_cons=vogal_consoante(n2);
                
                if(n1_vogal==1 && n2_cons==0)
                {
                    inverter(palavra);
                    strcpy(modificada[i][j], palavra);
                }
                else
                //atribuir à matriz modificada sem inverter
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