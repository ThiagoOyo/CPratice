#include<stdio.h>
#include<math.h>

// 10. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
// no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
// decimais após a vírgula, segundo a fórmula:


int main(){
    float x1, x2, x3, y1, y2, y3, distancia;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);
    x3 = x2 - x1;
    y3 = y2 - y1;
    distancia = sqrt(pow(x3, 2) + pow(y3, 2));
    printf("A distancia eh: %.4f", distancia);
}