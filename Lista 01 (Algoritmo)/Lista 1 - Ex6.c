#include<stdio.h>
#define pesoA 3.5
#define pesoB 7.5

int main(){
    float notaA, notaB, media; 

    printf("Digite a primeira nota: ");
    scanf("%f", &notaA);
    printf("Digite a segunda nota: ");
    scanf("%f", &notaB);
    media = (notaA * pesoA + notaB * pesoB)/2;
    printf("A media das notas %f e %f eh %f", notaA, notaB, media);
}