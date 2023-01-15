#include<stdio.h>


// 13. Faça um programa que informe o mês de acordo com o número digitado pelo usuário.
// Exemplo: Entrada = 4. Saída = Abril.

int main(){
    int numeroDigitado;

    printf("Digite o numero do mes: ");
    scanf("%d", &numeroDigitado);

    if (numeroDigitado == 1){
        printf("O numero digitado foi %d e corresponde ao mes de Janeiro", numeroDigitado);
    } else if (numeroDigitado == 2){
        printf("O numero digitado foi %d e corresponde ao mes de Fevereiro", numeroDigitado);
    } else if (numeroDigitado == 3){
        printf("O numero digitado foi %d e corresponde ao mes de Marco", numeroDigitado);
    } else if (numeroDigitado == 4){
        printf("O numero digitado foi %d e corresponde ao mes de Abril", numeroDigitado);
    } else if (numeroDigitado == 5){
        printf("O numero digitado foi %d e corresponde ao mes de Maio", numeroDigitado);
    } else if (numeroDigitado == 6){
        printf("O numero digitado foi %d e corresponde ao mes de Junho", numeroDigitado);
    } else if (numeroDigitado == 7){
        printf("O numero digitado foi %d e corresponde ao mes de Julho", numeroDigitado);
    } else if (numeroDigitado == 8){
        printf("O numero digitado foi %d e corresponde ao mes de Agosto", numeroDigitado);
    } else if (numeroDigitado == 9){
        printf("O numero digitado foi %d e corresponde ao mes de Setembro", numeroDigitado);
    } else if (numeroDigitado == 10){
        printf("O numero digitado foi %d e corresponde ao mes de Outubro", numeroDigitado);
    } else if (numeroDigitado == 11){
        printf("O numero digitado foi %d e corresponde ao mes de Novembro", numeroDigitado);
    } else if (numeroDigitado == 12){
        printf("O numero digitado foi %d e corresponde ao mes de Dezembro", numeroDigitado);
    }


}