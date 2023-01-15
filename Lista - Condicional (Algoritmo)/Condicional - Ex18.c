#include<stdio.h>

// 18. Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
// 5, mas não simultaneamente pelos dois.

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0){
        printf("O numero eh divisivel por 3 E por 5");
    } else if (numero % 3 == 0 || numero % 5 == 0){
        printf("O numero eh divisivel por 3 OU por 5"); 
    }




}