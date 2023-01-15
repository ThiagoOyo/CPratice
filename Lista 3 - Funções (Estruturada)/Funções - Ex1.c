#include<stdio.h>



int maior(int a, int b){
    
    if (a > b)
    {
       printf("%d", a);
    }else if (b > a)
    {
        printf("%d", b);
	    
    }
      
}

int main(){
	
	maior(10, 20);
}