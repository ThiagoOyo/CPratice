#include<stdio.h>


// 17. Faça um programa que mostre ao usuário um menu com quatro opções de operações
// matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
// o seu programa pede dois valores numéricos e realiza a operação, mostrando o
// resultado.

int main(){
    int numeroDigitado, valor1, valor2;

    printf("Escolha a operacao matematica desejada (1 = Soma | 2 = Subtracao | 3 = Divisao | 4 = Multiplicacao): ");
    scanf("%d", &numeroDigitado);
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    switch (numeroDigitado)
    {
    case 1:
        printf("O valor da soma de %d + %d eh %d", valor1, valor2, valor1 + valor2);
        break;
    case 2:
        printf("O valor da subtacao de %d - %d eh %d", valor1, valor2, valor1 - valor2);
        break;
    case 3:
        printf("O valor da divisao de %d / %d eh %d", valor1, valor2, valor1 / valor2);
        break;
    case 4:
        printf("O valor da multiplicacao de %d x %d eh %d", valor1, valor2, valor1 * valor2);
        break;    
    default:
        printf("Numero invalido!");
        break;
    }




}