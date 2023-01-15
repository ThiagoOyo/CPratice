#include <stdio.h>
#include <string.h>

int main(){
    char nome[30], email[30], endereco[30];
    char backupNome[30], backupEmail[30], backupEndereco[30];

    printf("Digite seu nome completo: ");
    fgets(nome, 30, stdin);
    printf("Digite seu email: ");
    scanf("%s", email);
    fflush(stdin);
    printf("Digite seu endereco: ");
    fgets(endereco, 50, stdin);

    strcpy(backupNome, nome);
    strcpy(backupEmail, email);
    strcpy(backupEndereco, endereco);

    printf("\nSeu nome: %sSeu email: %s\nSeu endereco: %s", backupNome, backupEmail, backupEndereco);


}