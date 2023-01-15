#include <stdio.h>


float maiorFuncao(float salario[100]){
	float maior = 0.0;
	
	for (int i = 0; i < 100; i++){
		if(salario[i] > maior){
			maior = salario[i];
		}
	}
	return maior;
}

int main(){
	float salario[100], maior;
	int matricula[100];
	
	for (int i = 0; i < 100; i++){
		printf("Digite a matricula do %d funcionario: ", i);
		scanf("%d", &matricula[i]);
		
		printf("Digite o salario do %d funcionario: ", i);
		scanf("%f", &salario[i]);
		
	}
	
	maior = maiorFuncao(salario);
	
	printf("O maior salario informado foi: %.2f", maior);
	
}