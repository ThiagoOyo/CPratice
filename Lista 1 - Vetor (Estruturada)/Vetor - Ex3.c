#include <stdio.h>

int main(){
	int dados[100], somatorio;
	
	for (int i=0; i<3; i++){
		printf("Digite o %d valor: ", i);
		scanf("%d", &dados[i]);
		somatorio += dados[i];
		
	}
	
	printf("O somatorio eh: %d", somatorio);
}