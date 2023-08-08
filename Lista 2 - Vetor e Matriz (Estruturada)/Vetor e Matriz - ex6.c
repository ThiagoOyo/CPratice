#include <stdio.h>
#include <math.h>

//exercicio 6

int main(){
    int a[5][5],i,j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
           a[i][j]=i*j;
        }
        
    }

     for( i = 0; i < 5; i++)
    {

        for( j = 0; j < 5; j++)
        {

         printf("A(%d,%d) = %d\n", i, j, a[i][j]);

        }

    }
    

}
