#include<stdio.h>

int main(){
    int quantos,i;
    int meses[50],matricula[50],recente[3],velho;
    
    printf("Quantos funcionarios sao? ");
    scanf("%d",&quantos);
   
    for ( i = 0; i < quantos; i++)
    {
        printf("Qual a matricula do funcionario %d: ",i);
        scanf("%d",&matricula[i]);
         if (matricula[i] == 0)
        {
            break;
        }
        printf("Quantos meses o funcionario %d trabalha: ",i);
        scanf("%d",&meses[i]);
    }
    for ( i = 0; i < quantos; i++)
    {
        if (meses[i] > velho)
        {
            velho=meses[i];
        }   
    }
    for ( i = 0; i < quantos; i++)
    {
        if (meses[i] <= velho)
        {
            velho=meses[i];
            recente[i]=meses[i];
        }
        
    }
    for ( i = 0; i < quantos; i++)
    {
        if ( meses[i]== recente[i])
        {
            printf("%d eh o funcionario mais recente e tem %d meses de trabalho\n",i,recente[i]);
        }
        
    }
    
}
