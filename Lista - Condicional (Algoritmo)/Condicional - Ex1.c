#include<stdio.h>

//1. Faça um programa que leia dois números e mostre qual deles é o maior.

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O maior numero eh o %d", n1);
    } else {
        printf("O maior numero eh o %d", n2);
    } 
       
}