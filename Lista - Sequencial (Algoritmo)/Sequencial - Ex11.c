#include<stdio.h>
#include<math.h>
#define pi 3.14159


// 11. Faça um programa que calcule e mostre a área da superfície e o volume de uma
// esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é:
// (4/3) * pi * R³. A fórmula para calcular a área é: 4 * pi * R². Considere (atribua)
// para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a fórmula,
// procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
// assumem que o resultado da divisão entre dois inteiros é outro inteiro.


int main(){
    float r, volume, area;

    printf("Digite o valor do raio (R): ");
    scanf("%f", &r);
    volume = (4.0/3) * pi * pow(r, 3);
    area = 4 * pi * pow(r, 2);
    printf("A area da superficie de uma esfera com raio %.2f eh: %.4f\n", r, area);
    printf("O volume da esfera com raio %.2f eh: %.4f", r, volume);







}