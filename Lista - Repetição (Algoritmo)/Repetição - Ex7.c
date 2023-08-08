#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int i ,num[10];
    float calculo=0;
    for ( i = 0; i < 10; i++){
        printf("Numero %d: ",i);
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < 10; i++){
       calculo +=num[i];
    }
    printf("%.2f",calculo/2);

    return(0);
}
