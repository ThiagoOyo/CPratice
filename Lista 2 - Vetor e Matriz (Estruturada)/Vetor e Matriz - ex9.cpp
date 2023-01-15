#include <stdio.h>
#include <math.h>

//Exercicio 9

int main(){
    int matrix[10][3],pior = 100,piorNota[3],aluno[3],materia[3],i,j;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Me forneça a nota %d do aluno %d (%d,%d): 0",j,i,i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    
    for ( j = 0; j < 3; j++)
    {
        pior = 100;
        for ( i = 0; i < 10; i++)
        {
            if (matrix[i][j]< pior)
            {
                pior = matrix[i][j];
                piorNota[j]=matrix[i][j];
                aluno[j]=i;
                materia[j]=j;
            }
        }
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        printf("Pior aluno na materia  %d foi %d com %d\n",i,aluno[i],piorNota[i]);
    }
    
}
