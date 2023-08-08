#include<stdio.h>
#define metrosRolo 50

int main() {
	int metrosFio, metrosResto, rolos;
	printf("Digite quantos metros de fio sao necessarios: ");
	scanf("%i", &metrosFio);
	metrosResto = metrosFio % metrosRolo;
	rolos = metrosFio / metrosRolo; 
	printf("Rolos de fio necessarios: %d\n", rolos);
	printf("Resto de fios: %d\n", metrosResto);
	}
