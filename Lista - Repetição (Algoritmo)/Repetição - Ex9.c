#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	    int media=0;
    int num[10] ,i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ",i);
        scanf("%d",&num[i]);
        while (num[i]<=0)
        {
           printf("Numero néo é positivo :");
            scanf("%d",&num[i]);
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
       media+=num[i];
    }
    printf("A Media é:%d",media/2);

    return(0);
}
