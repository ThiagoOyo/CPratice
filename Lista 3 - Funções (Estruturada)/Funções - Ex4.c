#include <stdio.h>


double volume(double raio, double altura){
	double v = 3.14141592 * (raio * raio) * altura;
	printf("O volume da esfera informada eh %.2lf", v);
}


int main(){
	
	volume(10,5);
}