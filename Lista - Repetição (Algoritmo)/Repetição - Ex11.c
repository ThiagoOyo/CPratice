#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int soma=0;
    int i ;
    for ( i = 0; i < 10; i++)
    {
        if (i%3== 0|| i%5==0)
        {
            soma += i;
        }
        
    }
    printf("soma igual:%d",soma);


    return(0);
}
