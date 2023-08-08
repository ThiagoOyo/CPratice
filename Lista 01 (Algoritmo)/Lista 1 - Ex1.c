#include<stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Digite um numero inteiro de horas: ");
    scanf("%d", &horas);
    minutos = horas * 60;
    segundos = minutos * 60;
    printf("%d horas sao correspondente a %d minutos\n", horas, minutos);
    printf("%d horas sao correspondente a %d segundos", horas, segundos);









}