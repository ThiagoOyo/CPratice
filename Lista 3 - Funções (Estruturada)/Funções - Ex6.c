#include <stdio.h>


double imc(double peso, double altura){
	double imc = peso / (altura * altura);
	printf("O IMC eh: %.2lf", imc);
}


int main(){
	
	imc(85, 1.84);
}