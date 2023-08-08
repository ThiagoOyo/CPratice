#include <stdio.h>
#include <math.h>

//Exercico 2

int main(){
    int v[10],v1[10],v2[10],i,calc,par[10],impar[10];
    for ( i = 0; i < 10; i++)
    {
        printf("M forneca o numero%d: ",i);
        scanf("%d",&v[i]);
        calc = v[i] %2;
        if (calc ==0)
        {
            v1[i]=v[i];
            par[i] = 1;
        }else if (calc > 0)
        {
           v2[i]=v[i];
            impar[i]=1;
        }  
    }
    for ( i = 0; i < 10; i++)
    {
      if (impar[i]==1)
      {
       printf("Numero impar e %d na posicao %d\n",v2[i],i);
      }  
    }
    for ( i = 0; i < 10; i++)
    {
        if (par[i]==1 )
      {
        printf("Numero par e %d na posicao %d\n",v1[i],i);
      }
    }
}
