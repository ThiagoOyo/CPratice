#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    int quantidade;
     char nome[1000];
    printf("Qual o nome:");
    fgets(nome,1000,stdin);
    quantidade = strlen(nome);
    printf("Total:%d",strlen(nome));
    printf("Apenas Letras %d",quantidade-1);
    
	return(0);
}
