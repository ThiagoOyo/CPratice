#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int numero;
    int i;
    printf("Qual o numero natural :");
    scanf("%d",&numero);
    for ( i = 0; i <= numero; i++){ 
        printf("  %d  ",i);
    }

    return(0);
}
