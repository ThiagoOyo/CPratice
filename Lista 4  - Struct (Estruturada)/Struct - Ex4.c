#include<stdio.h>

struct Carros
{
 char marca[30],modelo[50],cor[30],motorizacao[50];
 int portas;
};

int armazenar10(){
  struct Carros carro[10];
  
  
   for ( int i = 0; i < 10; i++)
   {
    printf("Qual a marca: ");
    fflush(stdin);
    fgets(carro[i].marca,30,stdin);
    printf("Qual o modelo: ");
    fflush(stdin);
    fgets(carro[i].modelo,50,stdin);
    printf("Qual a cor: ");
    fflush(stdin);
    fgets(carro[i].cor,30,stdin);
    printf("Qual a motorizacao: ");
    fflush(stdin);
    fgets(carro[i].motorizacao,50,stdin);
    printf("Qual o numero de portas:");
    scanf("%d",&carro[i].portas);
   }
}

int mostrar(){
  struct Carros carro[10];
  int i;
  
  for ( i = 0; i < 10; i++)
  {
    
  printf ("O carro %d\nmarca:%s\nmodelo:%s\ncor:%s\n,motorizacao;%s\nQuantidade de portas:%d",carro[i].marca,carro[i].modelo,carro[i].cor,carro[i].motorizacao,carro[i].portas);
  }
  
}
int main(){
  armazenar10();
  mostrar();
  
}
