#include <stdio.h>
#include <math.h>


//Exercicio 5

int main(){
    int i ,j;
    int A[4][4], B[4][4], C[4][4];
    for( i = 0; i < 4; i++)
    {
        for( j = 0; j < 4; j++){
            printf("A(%i,%i)= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++)
        {
            printf("B(%i,%i)= ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
     for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++)
        {
            printf("C(%i,%i)= ", i, j);
            scanf("%d", &C[i][j]);
        }
    }
    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++){
            if(A[i][j] > B[i][j])
            {
                C[i][j] = A[i][j];
            }
            else if (B[i][j]> A[i][j])
            {
                C[i][j] = B[i][j];
            }
        }
    }
    for( i = 0; i < 4; i++){
        for( j = 0; j < 4; j++)
        {
         printf("C(%d,%d) = %d\n", i, j, C[i][j]);
        }
    }
    return 0;
}
