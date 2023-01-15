#include<stdio.h>



int main (){
    int notas[80],i,j;
    
    
    
    
    for ( i = 0; i < 80; i++)
    {
       printf("Qual a nota do aluno %d :",i);
       scanf("%d",&notas[i]);
    }
    
    
    
    
    for ( i = 0; i < 80; i++)
    {
        for ( j = 0; j < 80; j++)
        {
            if (notas[i]== notas[j])
            {
                printf("Nota %d igual a %d\n",notas[i],notas[j]);
            }
            
        }
        
    
    }   
    
}