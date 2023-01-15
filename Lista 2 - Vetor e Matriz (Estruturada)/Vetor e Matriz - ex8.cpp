#include <stdio.h>
#include <math.h>

// Exercicio 8

int main (){
    int matrix[10][10],i,j ;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (i<j)
            {
             matrix[i][j] = 2*i + 7*j -2;  
            }
            else if (i==j)
            {
            matrix[i][j]= pow(3*i,2) - 1;
            }
            else if (i>j)
            {
               matrix[i][j]= pow(4*i,3) + pow(5*j,2) +1;
            } 
        }
            
    }
     for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%d\t",matrix[i][j]);
        
        }
        printf("\n");
    }
      
}
