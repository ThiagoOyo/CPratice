#include<stdio.h>

// 10. Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a
// seguir, verifique e mostre qual a classificação dessa pessoa.

int main(){
    float altura, peso;

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);
    if (altura < 1.2){
        if (peso < 60){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como A", peso, altura);
        } else if (peso > 60 && peso < 90) {
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como D", peso, altura);
        } else if (peso > 90) {
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como G", peso, altura);
        }
    } else if (altura > 1.2 && altura < 1.7){
        if (peso < 60){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como B", peso, altura);
        } else if (peso > 60 && peso < 90 ){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como E", peso, altura);
        } else if (peso > 90){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como H", peso, altura);
        }
    } else if (altura > 1.7){
        if (peso < 60){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como C", peso, altura);
        } else if (peso > 60 && peso < 90){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como F", peso, altura);
        } else if (peso > 90){
            printf("A pessoa com peso %.2f e altura %.2f esta classificada como I", peso, altura);
        }
    }


}