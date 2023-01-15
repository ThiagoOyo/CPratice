#include<stdio.h>

struct Pessoa {
	char nome[20], endereco[20], telefone[30];
};


int main(){
	struct Pessoa quem[10];
	
	for (int i = 0; i<10; i++){
		
		printf("Qual o nome da pessoa %d: ",i);
    	fflush(stdin);
    	fgets(quem[i].nome,20,stdin);
    	printf("Qual o endereco da pessoa %d: ",i);
    	fflush(stdin);
    	fgets(quem[i].endereco,20,stdin);
    	printf("Me forneca o telefone da pessoa %d",i);
    	fgets(quem[i].telefone, 20, stdin);
  }

  for (int i = 0; i < 3; i++)
  {
    printf("Pessoas:\n%s\n%s\n%s",quem[i].nome,quem[i].endereco,quem[i].telefone);
  }

		
	}
	
