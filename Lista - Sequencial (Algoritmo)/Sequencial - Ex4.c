#include<stdio.h>

// 4. Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
// de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
// forma “valor de A” + “valor de B” = “valor de X”.



int main(){
    int a, b, x;

    printf("Digite o valor de A: ");
    scanf ("%d", &a);
    printf("Digite o valor de B: ");
    scanf ("%d", &b);
    x = a + b;
    printf("%d + %d = %d", a, b, x);


}