#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct endereco {
	char *rua[20], *cidade[20], *estado[10], *cep[10];
} ;


	int *id[1000], *backupId[1000], finalizarPrograma, escolha, i, usuarioEdt, dadoVacinaEdt, usuarioDeletado, dadoEnderecoEdt;
    char *nome[1000], *backupNome[1000], *email[1000], *backupEmail[1000], *sexo[1000], *backupSexo[1000], *endereco[1000], *backupEndereco[1000], dadoUsuarioEdt[10], dadoEditado[30], buscarEmail[30];
    double *altura[1000], *backupAltura[1000], *dadoEditadoDouble, *alturaValidacao[1000], alturaEmDouble;
    bool *vacina[1000], *backupVacina[1000];
    struct endereco *enderecos[1000], *backupEnderecos[1000];

void idNulo(){
	for (i=0; i<1000; i++){
		id[i] = NULL;
	}	
}
void menu(){
	system("cls");
	printf("-------------------------------------\n");
    printf("Possiveis opcoes a serem escolhidas:\n 1.Incluir ate 1000 usuarios\n 2.Editar um usuario\n 3.Excluir um usuario\n 4.Buscar um usuario por email\n 5.Imprimir todos os usuarios cadastrados \n 6.Fazer backup dos usuarios cadastrados\n 7.Faca restauracao dos dados\n Digite a opcao desejada: ");
    printf("\n");
}

void incluirUsuario(){ // 1
            char emailValidacao[30];
            char sexoValidacao[20];
            int vacResp;
            char feminino[10], masculino[10], naoDeclarar[15];

            strcpy(feminino, "Feminino");
            strcpy(masculino, "Masculino");
            strcpy(naoDeclarar, "Nao declarar");



            id[i] = rand()%1000;            // ID 
            
            
            nome[i] = (char*) malloc(30 * sizeof(char));    //NOME 
            printf("\n-------------------------------------\n");
            printf("Digite o nome do usuario: ");     
			fflush(stdin);    
            fgets(nome[i], 30, stdin);           


            email[i] = (char*) malloc(30 * sizeof(char));       //EMAIL
            printf("Digite o email do usuario: ");
            scanf("%s", emailValidacao);
            if (strchr(emailValidacao, '@') != NULL) {
                strcpy(email[i], emailValidacao);
            } else {
                printf("Email informado invalido!");
                
            }


            sexo[i] = (char*) malloc(30 * sizeof(char));        //SEXO

            printf("Digite o sexo do usuario: ");
            fflush(stdin);
            fgets(sexoValidacao, 20, stdin);    
			sexoValidacao[strcspn(sexoValidacao, "\n")] = '\0';       
            if ( stricmp(sexoValidacao, feminino) == 0 || stricmp(sexoValidacao, masculino) == 0 || stricmp(sexoValidacao, naoDeclarar) == 0){
                strcpy(sexo[i], sexoValidacao);
            } else {
                printf("Sexo informado invalido! Digite novamente: ");
                fflush(stdin);
            	fgets(sexoValidacao, 20, stdin);    
				sexoValidacao[strcspn(sexoValidacao, "\n")] = '\0';
				if ( stricmp(sexoValidacao, feminino) == 0 || stricmp(sexoValidacao, masculino) == 0 || stricmp(sexoValidacao, naoDeclarar) == 0){
                strcpy(sexo[i], sexoValidacao);
            } else {
                printf("Sexo informado invalido! Digite novamente: ");
                fflush(stdin);
            	fgets(sexoValidacao, 20, stdin);    
				sexoValidacao[strcspn(sexoValidacao, "\n")] = '\0';
            }
            }


            enderecos[i] = malloc(sizeof(struct endereco));	 //ENDERECO
			
			printf("Digite a rua do usuario: ");
			fflush(stdin);
			fgets(enderecos[i]->rua, 20, stdin);
			
			printf("Digite a cidade do usuario: ");
			fflush(stdin);
			fgets(enderecos[i]->cidade, 20, stdin);
			
			printf("Digite o estado do usuario: ");
			fflush(stdin);
			fgets(enderecos[i]->estado, 10, stdin);
			
			printf("Digite o CEP do usuario: ");
			fflush(stdin);
			fgets(enderecos[i]->cep, 20, stdin);
			
			
			
                   
         

         
            

    
            altura[i] = (double*) malloc(sizeof(double));       //ALTURA
           // alturaValidacao[i] = (double*) malloc(sizeof(double));
            printf("Digite a altura do usuario: ");
            scanf("%lf", &altura[i]);
           // printf("%lf", altura[i]);
			// printf("alturaemdouble: %lf", alturaEmDouble);
           // printf("alturavalidacao: %lf", alturaValidacao[i]);
           // alturaEmDouble = *alturaValidacao[i];
           //  if (alturaEmDouble > 1.0 && alturaEmDouble < 2.0){
           //      altura[i] = alturaValidacao[i];
           //  } else {
            //     printf("Altura invalida!");
            //     break;
            // }

           


            vacina[i] = (bool*) malloc(sizeof(bool));       //VACINA 
            printf("O usuario foi vacinado? (0=Sim 1=Nao) ");       
            scanf(" %d", &vacResp);
            	if(vacResp ==0){
            		vacina[i] = true;
				} else if(vacResp == 1){
					vacina[i] = false;
				}
}

void editarUsuario(){ // 2
	dadoEditadoDouble = (double*) malloc(sizeof(double));
		printf("-------------------------------------\n");
        printf("Qual usuario deseja editar? ");
        scanf("%d", &usuarioEdt);
        printf("Qual dado do usuario deseja editar? (id, nome, email, sexo, endereco, altura e vacina): ");
        scanf("%s", dadoUsuarioEdt);
        if (strcmp(dadoUsuarioEdt, "altura") == 0){
            printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
            scanf("%lf", &dadoEditadoDouble);
        } else if (strcmp(dadoUsuarioEdt, "vacina") == 0) {
        	printf("Digite a informacao desejada para o preenchimento do dado a ser editado (0=Vacinado 1=Nao Vacinado):  ");
        	scanf("%d", &dadoVacinaEdt);
		} else if (strcmp(dadoUsuarioEdt, "endereco") == 0) {
			printf("Digite qual informacao do endereco deseja alterar (0=Rua 1=Cidade 2=Estado 3=CEP): ");
			scanf("%d", &dadoEnderecoEdt);
			printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
			fflush(stdin);
			fgets(dadoEditado, 30, stdin);
		} else {
            printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
            fflush(stdin);
            fgets(dadoEditado, 30, stdin);
        }


      
        if (strcmp(dadoUsuarioEdt, "nome") == 0){
            strcpy(nome[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, nome[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "id") == 0){
            strcpy(id[usuarioEdt], dadoEditado);    
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, id[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "email") == 0){
            strcpy(email[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, email[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "sexo") == 0){
            strcpy(sexo[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, sexo[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "endereco") == 0){
        	if (dadoEnderecoEdt == 0){
        		strcpy(enderecos[usuarioEdt]->rua, dadoEditado);
        		printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, enderecos[usuarioEdt]->rua);
			} else if (dadoEnderecoEdt == 1){
				strcpy(enderecos[usuarioEdt]->cidade, dadoEditado);
        		printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, enderecos[usuarioEdt]->cidade);
			} else if (dadoEnderecoEdt == 2){
				strcpy(enderecos[usuarioEdt]->estado, dadoEditado);
        		printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, enderecos[usuarioEdt]->estado);
			} else if (dadoEnderecoEdt == 3){
				strcpy(enderecos[usuarioEdt]->cep, dadoEditado);
        		printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, enderecos[usuarioEdt]->cep);
			}
      
        } else if (strcmp(dadoUsuarioEdt, "altura") == 0){
            altura[usuarioEdt] = dadoEditadoDouble;
           printf("Atualizado! O campo %s do usuario[%d] ficou: %lf\n", dadoUsuarioEdt, usuarioEdt, altura[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "vacina") == 0) {
        	if (dadoVacinaEdt == 1){
        		vacina[usuarioEdt] = false;
			} else if (dadoVacinaEdt == 0){
				vacina[usuarioEdt] = true;
			}
			
		}
        
}

void excluirUsuario(){ // 3
	printf("-------------------------------------\n");
    	printf("Qual usuario voce deseja excluir: ");
    	scanf("%d", &usuarioDeletado);
    	free(id);
    	free(nome);
    	free(email);
    	free(sexo);
    	free(enderecos);
    	free(altura);
    	free(vacina);
//    	free(id[usuarioDeletado]);
//    	free(nome[usuarioDeletado]);
//    	free(email[usuarioDeletado]);
//    	free(sexo[usuarioDeletado]);
//    	free(endereco[usuarioDeletado]);
//    	free(altura[usuarioDeletado]);
//    	free(vacina[usuarioDeletado]);
    	printf("O usuario %d foi deletado com sucesso!", usuarioDeletado);
}

void buscar(){ //4
	printf("-------------------------------------\n");
        printf("Digite o email do usuario que deseja buscar: ");
        scanf("%s", buscarEmail);
        if (strcmp(buscarEmail, email[i]) == 0){
            printf("Cadastro: %d\nNome: %sEmail: %s\nSexo: %s\nRua: %sCidade: %sEstado: %sCEP: %s\nAltura: %.2lf\nVacinado: Nao\n", id[i], nome[i], email[i], sexo[i], enderecos[i]->rua, enderecos[i]->cidade, enderecos[i]->estado, enderecos[i]->cep, altura[i]);
        }

        
    printf("Deseja finalizar o programa? (0=Nao 1=Sim): ");
}

void imprimir(){ //5
		for(i=0; i<1000; i++){
			if(id[i] != NULL){
			    printf("-------------------------------------\n");
			    if(vacina[i]==true){
                    printf("Cadastro: %d\nNome: %sEmail: %s\nSexo: %s\nRua: %sCidade: %sEstado: %sCEP: %sAltura: %.2lf\nVacinado: Sim\n", id[i], nome[i], email[i], sexo[i], enderecos[i]->rua, enderecos[i]->cidade, enderecos[i]->estado, enderecos[i]->cep, altura[i]);
                } else{
                    printf("Cadastro: %d\nNome: %sEmail: %s\nSexo: %s\nRua: %sCidade: %sEstado: %sCEP: %sAltura: %.2lf\nVacinado: Nao\n", id[i], nome[i], email[i], sexo[i], enderecos[i]->rua, enderecos[i]->cidade, enderecos[i]->estado, enderecos[i]->cep, altura[i]);
                }
			} else{
				continue;
			}
	}
}

void backup(){ // 6
	for(i=0; i<1000; i++){
			if(id[i] != NULL){
				backupId[i] = id[i];
				backupNome[i] = nome[i];
				backupEmail[i] = email[i];
				backupSexo[i] = sexo[i];
				backupEnderecos[i] = enderecos[i];
				backupAltura[i] = altura[i];
				backupVacina[i] = vacina[i];
				
				
		} else {
			continue;
		}
	}
}

void restaurar(){ // 7
	for (i=0; i<1000; i++){
			id[i] = backupId[i];
			nome[i] = backupNome[i];
			email[i] = backupEmail[i];
			sexo[i] = backupSexo[i];
			enderecos[i] = backupEnderecos[i];
			altura[i] = backupAltura[i];
			vacina[i] = backupVacina[i];
		}
}


int main(){
	idNulo();
int continuar;
finalizarPrograma = 0;

while (finalizarPrograma == 0){
	menu();
	scanf("%d", &escolha);


    switch (escolha)
    {
    case 1:         //INCLUIR USUARIO

		system("cls");
		for(i=0;i<1000;i++){
			incluirUsuario();
			printf("Deseja informar outro usuario? (0=Sim 1=Nao): ");
			scanf("%d", &continuar);
        if (continuar == 1) {
            break;
            }
		}
         
        

        break;

     case 2:     // EDITAR USUARIO
		editarUsuario();
		break;       


    case 3:     //EXCLUIR USUARIO
    	system("cls");
    	excluirUsuario();
    	break;



    case 4:     //BUSCAR USUARIO POR EMAIL
    	buscar();
  		scanf("%d", &finalizarPrograma);
		break;

	case 5:     //IMPRIMIR USUARIOS
		imprimir();
		break;
	
	case 6: 	//BACKUP DE TODOS OS USUARIOS
		backup();
		break;
	
	case 7: 	//RESTAURAÃ‡ÃƒO DOS DADOS
		restaurar();
		break;
	
    default:
        break;
    }
    
    


    printf("Deseja finalizar o programa? (0=Nao 1=Sim): ");
    scanf("%d", &finalizarPrograma);
}
}