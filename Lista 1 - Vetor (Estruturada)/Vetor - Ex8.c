#include <stdio.h>

int main(){
	int quantasPessoas,idade[100],calc=0,i;
    int velha=0;
    float media;
    
    printf("Quantas pessoas deseja informar? ");
    scanf("%d", &quantasPessoas);
    
    for ( i = 0; i < quantasPessoas; i++)
    {
        printf("Qual a idade da pessoa %d ",i);
        scanf("%d",&idade[i]);
        
    }
    
    for ( i = 0; i < quantasPessoas; i++)
    {
        if (idade[i]>= velha)
        {
            velha=idade[i];
        }
        calc += idade[i];
    }
    
    
    media= calc/quantasPessoas;
    printf("A media eh %.2f\n",media);
  
  
    for ( i = 0; i < quantasPessoas; i++)
    {
        if (idade[i] == velha){
            printf("A idade mais velha informada foi de %d e esta na posicao %d\n",velha,i);
        }
    }
	
}