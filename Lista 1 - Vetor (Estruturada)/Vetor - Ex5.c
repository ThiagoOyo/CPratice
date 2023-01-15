#include <stdio.h>

int main(){
	int dados[80], checkUp, count;
	
	count = 0;
	
	for (int i=0; i<80; i++){
		printf("Digite o dado que deseja armazenar: ");
		scanf("%d", &dados[i]);
	}
	
	printf("Digite o numero que deseja checkar: ");
	scanf("%d", &checkUp);
	
	for (int i=0; i<80; i++){
		if (checkUp == dados[i]){
			count++;
			printf("O numero %d eh igual ao %d e esta no dados[%d]", checkUp, dados[i], i);
		}
	}
	
}