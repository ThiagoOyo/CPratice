#include <stdio.h>

int main(){
	float notas[50];
	int qtdNotas;
	
	printf("Quantas notas deseja inserir? ");
	scanf("%d", &qtdNotas);
	
	for (int i=0; i<qtdNotas; i++){
		printf("Digite a nota do %d aluno: ", i);
		scanf("%f", &notas[i]);
	}
	
}