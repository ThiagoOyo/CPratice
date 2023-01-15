#include <stdio.h>

// 9. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
// seguintes categorias:


int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade > 5 && idade < 8) {
        printf("O nadador tem %d anos e pertence a categoria Infantil A", idade);
    } else if (idade > 7 && idade < 11) {
        printf("O nadador tem %d anos e pertence a categoria Infantil B", idade);
    } else if (idade > 10 && idade < 14) {
        printf("O nadador tem %d anos e pertence a categoria Juvenil A", idade);
    } else if (idade > 13 && idade < 18) {
        printf("O nadador tem %d anos e pertence a categoria Juvenil B", idade);
    } else if (idade > 17) {
        printf("O nadador tem %d anos e pertence a categoria Senior", idade);
    }



}