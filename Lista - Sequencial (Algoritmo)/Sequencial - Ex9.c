#include<stdio.h>


// 9. Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
// vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
// 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
// do mês, com duas casas decimais.

int main(){
    char nome[100];
    float salario, totalAReceber, vendasEmReais;

    printf("Digite o nome do vendedor: ");
    scanf("%s", &nome);
    printf("Digite o salario fixo do vendedor: ");
    scanf("%f", &salario);
    printf("Digite o total de vendas efetuadas no mes em dinheiro: ");
    scanf("%f", &vendasEmReais);
    totalAReceber = salario + (vendasEmReais * 15/100);
    printf("O vendedor %s vai receber o valor total de: %.2f", nome, totalAReceber);



}