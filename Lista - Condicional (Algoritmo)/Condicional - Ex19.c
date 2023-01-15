#include<stdio.h>

// 19. Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um
// valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual
// o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As
// moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de
// notas necessárias.


int main(){
    float valor;
    int a, b, c, d, e, f, g, h, i, j, k, l;

    printf("Informe um valor em reais: ");
    scanf("%f", &valor);

    a = valor/100;
    valor = valor - a * 100;

    b = valor/50;
    valor = valor - b * 50;

    c = valor/20;
    valor = valor - c * 20;

    d = valor/10;
    valor = valor - d * 10;

    e = valor/5;
    valor = valor - e * 5;

    f = valor/2;
    valor = valor - f * 2;

    g = valor/1;
    valor = valor - g * 1;

    h = valor/0.5;
    valor = valor - h * 0.5;

    i = valor/0.25;
    valor = valor - i * 0.25;

    j = valor/0.1;
    valor = valor - j * 0.1;

    k = valor/0.05;
    valor = valor - k * 0.05;

    l = valor/0.01;
    valor = valor - l * 0.01;

printf("Foram utilizadas %d notas de 100 reais.\n", a);
printf("Foram utilizadas %d notas de 50 reais.\n", b);
printf("Foram utilizadas %d notas de 20 reais.\n", c);
printf("Foram utilizadas %d notas de 10 reais.\n", d);
printf("Foram utilizadas %d notas de 5 reais.\n", e);
printf("Foram utilizadas %d notas de 2 reais.\n", f);
printf("Foram utilizadas %d moedas de 1 real.\n", g);
printf("Foram utilizadas %d moedas de 50 centavos.\n", h);
printf("Foram utilizadas %d moedas de 25 centavos.\n", i);
printf("Foram utilizadas %d moedas de 10 centavos.\n", j);
printf("Foram utilizadas %d moedas de 5 centavos.\n", k);
printf("Foram utilizadas %d moedas de 1 centavo.\n", l);


}

