#include <stdio.h>

int main(){
	char letras[30];
	
		printf("Digite as letras: ");
		fflush(stdin);
		fgets(letras, 30, stdin);
		
	
	for (int i=30; i>0; i--){
		printf("%c\n", letras[i]);
	}
	
	
}