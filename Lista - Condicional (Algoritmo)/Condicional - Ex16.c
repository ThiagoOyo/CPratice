#include<stdio.h>

// 16. Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a
// qual cidade pertence, considerando só os seguintes valores:
// 61 - Brasília
// 71 - Salvador
// 11 - São Paulo
// 21 - Rio de Janeiro
// 32 - Juiz de Fora
// 19 - Campinas
// 27 - Vitória
// 31 - Belo Horizonte
// qualquer outro - uma cidade no Brasil sem identificação


int main(){
int numeroDigitado;

printf("Digite o numero do DDD: ");
scanf("%d", &numeroDigitado);

switch (numeroDigitado)
{
case 61:
    printf("O DDD informado eh de Brasilia");
    break;
case 71:
    printf("O DDD informado eh de Salvador");
    break;
case 11:
    printf("O DDD informado eh de Sao Paulo");
    break;
case 21:
    printf("O DDD informado eh de Rio de Janeiro");
    break;
case 32:
    printf("O DDD informado eh de Juiz de Fora");
    break;
case 19:
    printf("O DDD informado eh de Campinas");
    break;
case 27:
    printf("O DDD informado eh de Vitoria");
    break;
case 31:
    printf("O DDD informado eh de Belo Horizonte");
    break;

default:
    printf("Uma cidade no Brasil sem identificação.");
    break;
}



}