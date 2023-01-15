#include <stdio.h>


// 11. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
// seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
// tabela a seguir:

int main(){
    int n1, n2, n3, numeroDigitado, media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o tipo de media que deseja calcular (1 = Geometrica / 2 = Ponderada / 3 = Harmonica / 4 = Aritmetica): ");
    scanf("%d", &numeroDigitado);

    if (numeroDigitado == 1){
        media = n1 * n2 * n3;
        printf("A media geometrica eh: %d", media);
    } else if (numeroDigitado == 2) {
        media = (n1 + 2 * n2 + 3 * n3)/6;
        printf("A media Ponderada eh: %d", media);
    } else if (numeroDigitado == 3){
        media = 1 / (1 / n1 + 1 /n2 + 1 /n3); 
        printf("A media Harmonica eh: %d", media);
    } else if (numeroDigitado == 4){
        media = (n1 + n2 + n3)/3;
        printf("A media Aritmetica eh: %d", media);
    }

}