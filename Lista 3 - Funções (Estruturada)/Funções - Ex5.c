#include <stdio.h>


double volume(double raio){
	double v = 4 / (3 * 3.14141592) * (raio * raio * raio);
	printf("O volume da esfera informada eh %.2lf", v);
}


int main(){
	
	volume(10);
}