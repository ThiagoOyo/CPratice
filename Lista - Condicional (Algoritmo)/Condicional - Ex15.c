#include<stdio.h>


// 15. Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
// imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-
// feira, se 2, e assim por diante.

int main(){
    int numeroDigitado;

    printf("Digite o numero referente ao dia da semana: ");
    scanf("%d", &numeroDigitado);


    switch (numeroDigitado)
    {
    case 1:
        printf("Domingo.");
        break;
    case 2:
        printf("Segunda.");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta.");
        break;
    case 5:
        printf("Quinta.");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado.");
        break;
    
    default:
        break;
    }
}