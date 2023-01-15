#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int menor=1000;
    int maior=0;
    int num[10] ,i;
    for ( i = 0; i < 10; i++)
    {
        printf("Numero %d: ",i);
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < 10; i++)
    {
       if (num[i]< menor)
       {
            menor=num[i];
       }
       if (num[i]>maior)
       {
            maior = num[i];
       } 
    }
    printf("Menor:%d\nMaior:%d",menor ,maior);
    
    return(0);
}
