#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero,i;
	
    printf("Numero maior que 1: ");
    scanf("%d",&numero);
    
    if (numero == 2){
        printf("Primo");
    }
    while (numero < 1){
        printf("Numero digitado é menor ou igual a 1\n por favor digite um numero maior que 1: ");
        scanf("%d",&numero);
    }
    
    for ( i = 2; i < numero; i++){
    	
        if (numero%i==0){
         printf("Nao primo");
        }else{
            printf("Primo");
            break;
        }
        
    }

	return(0);
}
