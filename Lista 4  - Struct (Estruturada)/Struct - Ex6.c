#include<stdio.h>


struct endereco
{
  char rua[50],bairro[50],cidade[50],estado[50], CEP[50];
};

struct cadastro
{
  struct endereco enderecoCadastro;
  char nome[50],cpf[11],sexo, identidade[20], estadoCivil[20];
  int idade;
  float salario;
};


int main (){
  int maior = -1, a, busca ;
  struct cadastro cliente[5];
  
  
  for ( int i = 0; i < 5; i++)
  {  
    printf("Qual o Nome: ");
    fflush(stdin);
    fgets(cliente[i].nome,50,stdin);
    printf("Qual o CPF: ");
    fflush(stdin);
    fgets(cliente[i].cpf,11,stdin);
    printf("Qual o Sexo (M) ou (F): ");
    fflush(stdin);
    fgets(cliente[i].cpf,1,stdin);
    printf("Qual o Salario: ");
    scanf("%d",&cliente[i].salario);
    printf("Qual a identidade: ");
    scanf("%d",&cliente[i].identidade);
    printf("Qual a idade: ");
    scanf("%d",&cliente[i].idade);
    printf("Qual a rua: ");
    fflush(stdin);
    fgets(cliente[i].enderecoCadastro.rua,50,stdin);
    printf("Qual a cidade: ");
    fflush(stdin);
    fgets(cliente[i].enderecoCadastro.cidade,50,stdin);
    printf("Qual o bairro: ");
    fflush(stdin);
    fgets(cliente[i].enderecoCadastro.bairro,50,stdin);
    printf("Qual o estado: ");
    fflush(stdin);
    fgets(cliente[i].enderecoCadastro.estado,50,stdin);
  }
  for ( int i = 0; i < 5; i++)
  {
    if (cliente[i].idade > maior )//C
    {
      maior = cliente[i].idade;
      a = i ;
    }
    if (cliente[i].sexo == 'm' || cliente[i].sexo == 'M')//D
    {
      printf("Cliente %d e do sexo Masculino:");
    }
    if (cliente[i].salario > 1000)//D
    {
      printf("Cliente %d e do Recebe um salario Maior que 1000");
    }
    
    }
    printf("A pessoa %d tem a maior idade com %d",a,maior);
    printf ("Qual identidade esta buscando :");
    scanf("%d",&busca);
    for ( int i = 0; i < 5; i++)
    {
      if (busca == cliente[i].identidade)
      {
        printf("A Pessoa %d e a que vc busca com a identidade de %d",i,cliente[i].identidade);
      }
      
    }
}