struct numeros
{
  int a,b,c;
};

int main (){
  struct numeros vetor[2];
  int soma[3];

  for (int i = 0; i < 2; i++)
  {
    printf("Qual o valor de A: ");
    scanf("%d",vetor[i].a);

    printf("Qual o valor de B: ");
    scanf("%d",vetor[i].b);

    printf("Qual o valor de C: ");
    scanf("%d",vetor[i].c);
  }
  soma[0]=vetor[0].a + vetor[1].a;
  soma[1]=vetor[0].b + vetor[1].b;
  soma[3]=vetor[0].c + vetor[1].c;


}