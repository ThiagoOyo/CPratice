#include<stdio.h>

// 3. Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
// double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
// booleano. Na sequência, imprima todos com a formatação abaixo.
// Numero inteiro: “valor”
// Numeros reais:
// “valor”
// “valor”
// Letra: “valor”
// String: “valor”
// Logico: “valor”


int main(){
    int nInt;
    float n1Real, n2Real;
    char letra, string[100];
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%d", &nInt);
    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1Real);
    printf("Digite o segundo numero real: ");
    scanf("%f", &n2Real);
    
    printf("Digite um conjunto de caracteres: ");
    scanf("%s", &string);
    printf("Numero inteiro: %d\n", nInt);
    printf("Numero reais:\n%.2f \n%.2f \n", n1Real, n2Real);
    printf("Letra: %c\n", letra);
    printf("String: %s\n", string);
    printf("Logico: True");
}