#include<stdio.h>
int main() {
	char nome[100], sexo; 
	int nMatricula, nHorasTrabalhadas; 
	float valorPorHora, salario; 
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite o numero da matricula: ");
	scanf("%d", &nMatricula);
	printf("Digite o sexo: ");
	scanf("%c", &sexo);
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d", &nHorasTrabalhadas);
	printf("Digite o valor por hora trabalhada: ");
	scanf("%f", &valorPorHora);
	salario = nHorasTrabalhadas * valorPorHora;
	printf("Funcionario: %s\n", nome);
	printf("Numero de matricula %d\n", nMatricula);
	printf("Sexo: %c\n", sexo);
	printf("Numero de horas trabalhadas %d\n", nHorasTrabalhadas);
	printf("Valor por hora trabalhada: %f\n", valorPorHora);
	printf("Salario: %.2f\n", salario);
	
}
