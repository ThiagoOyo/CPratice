#include<stdio.h>



int converter(double f){
    double c;
	c = (f - 32) * (5.0 / 9.0);
    printf("A temperatura convertida para Celsius eh: %.2lf", c);
}




int main(){
    double f ;
    printf("Qual a temperatura em Fahrenheit que deseja converter: ");
    scanf("%lf",&f);
    converter(f);
}