#include<stdio.h>

// 2. Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois
// números forem iguais, imprima a mensagem “Números iguais”.

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O maior numero eh o %d", n1);
    } else if (n2 > n1){
        printf("O maior numero eh o %d", n2);
    } else {
        printf("Os numeros sao iguais.");
    }






}