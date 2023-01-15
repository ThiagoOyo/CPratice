#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

    int tres=0;
    int i;
    
    for ( i = 1; i <= 5 && i >0; i++)
    { 
        tres= 3 * i;
        printf("  %d  ",tres);
      
    }
    return(0);
}
