#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
 	int i ,numero,fibonacci[100];
    int a=1;
    printf("Me forneça o numero:");
    scanf("%d",&numero);
    fibonacci[0]=0;
    fibonacci[1]=1;
    for ( i = 2;  i <numero; i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    i=0;
    while (i<numero)
    {
        printf("%d\n",fibonacci[i]);
        i++;
    }
    return(0);
}
