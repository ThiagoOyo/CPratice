#include <stdio.h>
#include <string.h>

int main(){
    char nome[10], sobrenome[10], cpf[14], senha[34];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("Digite seu CPF: ");
    scanf("%s", &cpf);

    strcpy(senha, nome);
    strncat(senha, sobrenome, 1);
    strncat(senha, cpf, 3);

    printf("Sua senha eh: %s", senha);

}