#include <stdio.h>


struct DadosAluno{
	char nome[20];
	int idade;
};

int main(){
	struct DadosAluno teste;
	
	printf("Qual o nome do aluno: ");
	fgets(teste.nome, 20, stdin);
	fflush(stdin);
	
	printf("Qual a idade do aluno: ");
	scanf("%d", &teste.idade);
	
	printf("O nome do aluno informado foi %s", teste.nome);
	printf("A idade do aluno informado foi %i", teste.idade);
	
}