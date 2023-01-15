#include<stdio.h>

// 12. Leia 2 valores com uma casa decimal (x e y), que devem representar as
// coordenadas de um ponto em um plano. A seguir, determine qual o quadrante
// ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na
// origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem
// “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
// conforme for a situação.

int main(){
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("O ponto %d, %d esta no Q1", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto %d, %d esta no Q2", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto %d, %d esta no Q4", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto %d, %d esta no Q3", x, y);
    }else if (x == 0 && y == 0){
        printf("O ponto %d, %d esta na origem", x, y);
    }else if (x == 0){
        printf("O ponto %d, %d esta no eixo X", x, y);
    } else if (y == 0){
        printf("O ponto %d, %d esta no eixo Y", x, y);
    } 


}