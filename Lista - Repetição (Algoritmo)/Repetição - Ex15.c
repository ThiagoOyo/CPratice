#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numeros,i;
    int linha=0,contador=1,numeroStart=0;
    
    printf("Numero: ");
    scanf("%d",&numeros);
    
    while (linha < numeros){
        for ( i = 1; i <= contador; i++){
            numeroStart++;
            printf("%d\t",numeroStart);
        }
        
        printf("\n");
        contador++;
        linha++;
    }
    
	return(0);
}
