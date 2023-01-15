#include<stdio.h>
#include<string.h>

// 8. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
// possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
// usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
// final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
// digitado não for válido, mostrará uma mensagem de erro.


int main(){
    char estado[5];
    float valor, valorComImposto;

    printf("Digite o Estado de destino: ");
    scanf("%s", &estado);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    if (strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0) {
        valorComImposto = valor + valor * 7/100;
        printf("O valor do produto com imposto para MG eh: %.2f", valorComImposto);
    } else if (strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0) {
        valorComImposto = valor + valor * 12/100;
        printf("O valor do produto com imposto para SP eh: %.2f", valorComImposto);
    } else if (strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0) {
        valorComImposto = valor + valor * 15/100;
        printf("O valor do produto com imposto para RJ eh: %.2f", valorComImposto);
    } else if (strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0) {
        valorComImposto = valor + valor * 8/100;
        printf("O valor do produto com imposto para MS eh: %.2f", valorComImposto);
    } else {
        printf("O estado digitado nao eh valido!");
    }

}