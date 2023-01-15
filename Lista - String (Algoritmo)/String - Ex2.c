#include <stdio.h>
#include <string.h>

int main(){
    char cor[7];

    printf("Digite a cor: ");
    scanf("%s", &cor);

    if(strcmp(cor,"branco") == 0 || strcmp(cor, "amarelo") == 0 || strcmp(cor, "verde") == 0)
        printf("Cor escolhida: %s", cor);
    else
        printf("Invalida!");


}