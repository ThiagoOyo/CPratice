#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero,impar=1;
    int i;
    printf("Qual o numero natural :");
    scanf("%d",&numero);
    for ( i = 1; i <= numero && i >0; i++){ 
        printf("  %d  ",impar);
        impar = impar +2;
    }

    return(0);
}
