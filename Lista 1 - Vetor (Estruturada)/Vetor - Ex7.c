#include <stdio.h>



int main(){
	float precoCD[100], cd10[100], cdQuanto[100];
	int aumento;
	
	for (int i=0; i<4; i++){
		printf("Digite o valor do CD %d: ", i);
		scanf("%f", &precoCD[i]);
		cd10[i] = precoCD[i] + (precoCD[i] * 0.1);
	}
	
	printf("Quanto de aumento deseja dar em cada produto? ");
	scanf("%d", &aumento);
	
	for (int i=0; i<4; i++){
		cdQuanto[i] = precoCD[i] + (precoCD[i] * aumento / 100);
	}
	
	printf("O percentual de aumento foi %d\n", aumento);
	
	for (int i=0; i<4; i++){
	printf("O preco real do CD era: %.2f\nO preco com aumento de 10 por cento ficou: %.2f\nO preco com aumento informado pelo vendedor ficou: %.2f\n", precoCD[i], cd10[i], cdQuanto[i]);
	}
}