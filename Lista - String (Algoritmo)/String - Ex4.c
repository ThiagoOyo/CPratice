#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], nomeMeio[50], ultimoNome[50];

    printf("Nome: ");
	fgets(nome, 50, stdin);
    fflush(stdin);
    printf("Nome do meio: ");
    fgets(nomeMeio, 50, stdin);
    printf("Ultimo Nome: ");
    fgets(ultimoNome, 50, stdin);

    strcat(nome, nomeMeio);
    strcat(nome, ultimoNome);

    printf("%s", nome);


}