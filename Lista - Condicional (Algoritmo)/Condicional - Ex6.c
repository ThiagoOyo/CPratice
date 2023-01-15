#include<stdio.h>

// 6. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
// peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
// ◦ Homens: (72,7 * h) – 58
// ◦ Mulheres: (62,1 * h) – 44,7

int main(){
    float h, ideal;
    char sexo; 


    printf("Digite o sexo da pessoa: ");
    scanf("%c", &sexo);
    printf("Digite a altura da pessoa: ");
    scanf("%f", &h);
   

    if ((sexo == 'f') || (sexo == 'F')){
        ideal = (62.1 * h) - 44.7;
        printf("O peso ideal eh: %f", ideal);
    } else if (sexo == 'm' || sexo == 'M') {
        ideal = (72.7 * h) - 58;
        printf("O peso ideal eh: %.2fkg", ideal);

    }




}