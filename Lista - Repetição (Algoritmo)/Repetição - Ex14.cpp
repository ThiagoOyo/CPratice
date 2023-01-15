#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float numero,hn=0.0;
    int i=0;
    printf("Forneça o numero: ");
    scanf("%f",&numero);
    for ( i = 1; i <= numero; i++){
        hn += 1.0/i;
    }
    printf("Resultado:%f",hn);

	return(0);
}
