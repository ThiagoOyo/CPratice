#include <stdio.h>
#include <string.h>

int main(){
    char nomeCompleto[30];

    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, 30, stdin);

    printf("Nome Completo: %s\nQuantidade de caracteres: %d", nomeCompleto, strlen(nomeCompleto) - 1);
}