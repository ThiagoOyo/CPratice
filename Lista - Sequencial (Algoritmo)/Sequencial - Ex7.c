#include<stdio.h>

// 7. Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
// atribua esta operação à variável PROD. A seguir mostre a variável PROD com
// mensagem: PROD = “valor de PROD”.



int main(){
    int n1, n2, produto; 

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    produto = n1 * n2;
    printf("PROD = %d", produto);


}