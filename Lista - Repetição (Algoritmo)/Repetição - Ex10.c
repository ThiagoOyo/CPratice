#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero ,divisivel=0;
    int i;
    printf("Digite o numero: ");
    scanf("%d",&numero);
    printf("\nNumero %d divisivel por :\n",numero);
    for ( i = 0; i <= numero; i++){
        divisivel = i % numero;
        if ( divisivel == 0){
            printf("%i\n",i);
        }
        
    }

    return(0);
}
