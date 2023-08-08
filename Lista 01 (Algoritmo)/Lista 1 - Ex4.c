#include <stdio.h>

int main(){
    int n1, n2, resto, quociente;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    quociente = n1 / n2;
    resto = n1 % n2; 
    printf("O quociente eh %.2d\n", quociente);
    printf("O resto eh %.2d", resto);



}