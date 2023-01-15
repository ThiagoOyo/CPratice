#include<stdio.h>
#include<math.h>

// 5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o
// número digitado ao quadrado e raiz quadrada do número digitado.

int main(){
    int numero, raiz, potencia;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero > 0){
        raiz = sqrt(numero);
        potencia = pow(numero, 2);
        printf("O numero %d ao quadrado eh: %d\n", numero, potencia);
        printf("A raiz quadrada do numero %d eh: %d", numero, raiz);
    }



}