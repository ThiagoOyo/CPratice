#include <stdio.h> //biblioteca
#include <stdlib.h>//biblioteca
#include <locale.h>//biblioteca
#include <string.h>//biblioteca



// usei s1 ou s2 representa as sessoes x1 e x2 usei para o for começar a partir do numero 1
int main (){
	
int tot, fem, masc, crianca, adolesc, adulto, idoso, sessoes, assistirams1, idades1[1000], maiorIdadeF, maiorIdadeM, countMeia, countInteira, assistirams2, idades2[1000], x1, x2, i, ingresso1[300], ingresso2[300];
char generos1[1000], generos2[1000], masculino, feminino, filme[40], maior[8];
setlocale(LC_ALL, "Portuguese"); //formata linguagem para portugues

masc = fem = crianca = adolesc = adulto = idoso = maiorIdadeF = maiorIdadeM = countInteira = countMeia = 0;

printf("Nome do filme: ");
fflush(stdin);
fgets(filme, 40, stdin);

do{
	printf("digite o numero de sessões: ");
	scanf ("%d", &sessoes);//quantidade de sessoes
}while (sessoes != 2);//validaçao das 2 sessoes

///////////////////SESSÃO 1 ////////////////////////

	do{
		printf("informe quantas pessoas assistiram ao filme na sessão 1: "); 
		scanf ("%d", &assistirams1);//quantas pessoas assistiram ao filme da sesssao 1
	}while (assistirams1 < 2);// validaçao do minimo de pessoas que asssistiram
	x1 = assistirams1 + 1; //para o for começa do numero 1
	
	for (i=1; i < x1; i++){ //repetiçao para guardar dados no vetor
		do{
			printf("Digite o sexo do cliente %d da sessão 1: ",i);
			fflush (stdin);//comando para limpar memoria
			scanf("%c",&generos1[i]);//sexo dos clientes
		}while (generos1[i] != 'm' && generos1[i] != 'f' && generos1[i] != 'M' && generos1[i] != 'F');

		if(generos1[i] == 'F' || generos1[i] == 'f'){
			fem++;
		} else if(generos1[i] == 'M' || generos1[i] =='m'){
			masc++;
		}

	
		printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  // TIPO DE INGRESSO
		scanf("%d", &ingresso1[i]); 
		if(ingresso1[i]==1){
			tot += 25;
			countMeia++;
		} else if(ingresso1[i]==2){
			tot += 50;
			countInteira++;
		}
		
		do{
			printf("Digite a idade do cliente %d da sessão 1: ",i);
			fflush (stdin);//limpa memoria
			scanf("%d",&idades1[i]);//idade dos clientes
	  		printf("\n");
		}while (idades1[i] < 3 || idades1[i] > 100 );//validaçao da iddade
		
		if (idades1[i] >= 65 && idades1[i] <= 100){
			idoso++;
			printf("%d", idoso);
		} else if(idades1[i] >= 3 && idades1[i] <= 13) {
  			crianca++;
		} else if(idades1[i] >= 14 && idades1[i] <= 17){
			adolesc++;
		} else if(idades1[i] >= 18 && idades1[i] <= 64){
			adulto++;
		} 
		
		if (idades1[i] >= 18 && (generos1[i] == 'f' || generos1[i] == 'F')){
			maiorIdadeF++;
		} else if (idades1[i] >= 18 && (generos1[i] == 'm' || generos1[i] == 'M')){
			maiorIdadeM++;
		}
	}
	
	
///////////////////SESSÃO 2 ////////////////////////	
//------------------------------------------------------------------------------------
		do{
			printf("informe quantas pessoas assistiram ao filme na sessão 2: ");
			scanf ("%d", &assistirams2);//quantas pessoas assistiram ao filme da sesssao 1
		}while (assistirams2 < 2);// validaçao do minimo de pessoas que asssistiram
		x2 = assistirams2 + 1;//para o for começa do numero 1
	
		for (i=1; i < x2; i++){ //repetiçao para guardar dados no vetor
		
			do{
				printf("Digite o sexo do cliente %d da sessão 2 (F/M): ",i);
				fflush (stdin);//comando para limpar memoria
				scanf("%c",&generos2[i]);//sexo dos clientes
				
				if(generos2[i] == 'M' || generos2[i] == 'm'){  // Contagem de genero
					masc++;
				} else if(generos2[i] == 'F' || generos2[i] == 'f'){
					fem++;
				}
			}while (generos2[i] != 'm' && generos2[i] != 'f' && generos2[i] != 'M' && generos2[i] != 'F');
		
			printf("Informe o tipo do ingresso do cliente %d (1 - meia | 2 - inteira): ", i);  //Tipo de ingresso
			scanf("%d", &ingresso2[i]); 
			
			if(ingresso2[i]==1){
				countMeia++;
				tot += 25;
			} else if(ingresso2[i]==2){
				countInteira++;
				tot += 50;
			}
	
			do{
				printf("Digite a idade do cliente %d da sessão 2: ",i);
				fflush (stdin);//limpa memoria
				scanf("%d",&idades2[i]);//limpa memoria
		  		printf("\n");
		  		
		  		if(idades2[i] >= 3 && idades2[i] <= 13) {
  				crianca++;
			  	} else if(idades2[i] >= 14 && idades2[i] <= 17){
			  	adolesc++;
			 	} else if(idades2[i] >= 18 && idades2[i] <= 64){
			  	adulto++;
			 	} else if (idades2[i] >= 65 && idades2[i] <= 100){
			  	idoso++;
			  	}	
			}while (idades2[i] < 3 || idades2[i] > 100 );//validaçao da iddade
			
			
			if (idades2[i] >= 18 && (generos2[i] == 'f' || generos2[i] == 'F')){
				maiorIdadeF++;
			} else if (idades2[i] >= 18 && (generos2[i] == 'm' || generos2[i] == 'M')){
				maiorIdadeM++;
			}
		
		
		
			
}
			printf(" Nome do filme: %s\n Homens: %d\n Mulheres: %d\n", filme, masc, fem);
			printf(" Crianças: %d\n Adolescentes: %d\n Adultos: %d\n Idosos: %d\n", crianca, adolesc, idoso);
			printf(" Quantidade de pessoas maiores de idade do sexo MASCULINO: %d\n", maiorIdadeM);
			printf(" Quantidade de pessoas maiores de idade do sexo FEMININO: %d\n", maiorIdadeF);
			printf(" Valor Total Arrecadado: R$%d\n", tot);
			if (countInteira > countMeia){
				strcpy(maior, "Inteira");
			} else if (countInteira < countMeia){
				strcpy(maior, "Meia");
			} else if (countInteira == countMeia){
				strcpy(maior, "Empate");
			}
			printf(" O tipo de ingresso mais vendido foi: %s\n", maior);
}


