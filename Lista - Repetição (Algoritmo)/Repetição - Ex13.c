#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int i,maior=0,menor=10000,num[10000];
    for ( i = 0; i < 1000 ; i++)
    {
        printf("Forneça o numero da posição %d:",i);
        scanf("%d",&num[i]);
        if (num[i]<0)
         {
            break;
         }
        if (num[i]>maior)
        {
            maior=num[i];
        } 
        if (num[i]<menor)
        {
            menor = num[i];
        }
   } 
   printf("Maior:%d\nMenor:%d\n",maior,menor);

	return(0);
}
