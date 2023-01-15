#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

 int i;
    for ( i = 10; i >= 0; i--)
    {
        printf("%d\t",i);
    }
    
    return(0);
}
