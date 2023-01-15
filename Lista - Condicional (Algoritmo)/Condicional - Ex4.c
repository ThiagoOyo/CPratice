#include<stdio.h>

// //4. Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
// empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
// concedido.”, caso contrário, imprima: “Empréstimo concedido.”

int main(){
    float salario, prestacao;

    printf("Digite o valor do salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 20/100){
        printf("Emprestimo nao concedido!");
    } else {
        printf("Emprestimo condedido!");
    }


}