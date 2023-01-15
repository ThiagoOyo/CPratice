#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int main(){
double *teste;
int i;

teste = (double*) malloc(sizeof(double));

for (i=0; i<2; i++){
    printf("Digite a altura do usuario: ");
    scanf("%lf", &teste[i]); 
}

 for (i=0; i<2; i++){
    printf("%lf\n", teste[i]);

 }

}