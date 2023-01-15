#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



int main(){
    int  finalizarPrograma, escolha, continuar, i, usuarioEdt; 
    char *nome[1000], *email[1000], *sexo[1000], *endereco[1000], dadoUsuarioEdt[10], dadoEditado[30], buscarEmail[30], vetorVazio[1000];
    double *altura[1000], *dadoEditadoDouble;
    bool *vacina[1000];
    int contagem, *id[1000];

finalizarPrograma = 0;

while (finalizarPrograma == 0){

    printf("Possiveis opcoes a serem escolhidas:\n 1.Incluir ate 1000 usuarios\n 2.Editar um usuario\n 3.Excluir um usuario\n 4.Buscar um usuario por email\n 5.Imprimir todos os usuarios cadastrados \n 6.Fazer backup dos usuarios cadastrados\n 7.Faca restauracao dos dados\n Digite a opcao desejada: ");
    scanf("%d", &escolha);


    switch (escolha)
    {
    case 1:         //INCLUIR USUARIO


        for (i=0; i < 1000; i++) {
            char emailValidacao[30];
            char sexoValidacao[20];
            double *alturaValidacao;
            char feminino[10], masculino[10], naoDeclarar[15];

            strcpy(feminino, "Feminino");
            strcpy(masculino, "Masculino");
            strcpy(naoDeclarar, "Nao declarar");



            nome[i] = (char*) malloc(30 * sizeof(char));
            printf("Digite o nome do usuario: ");           
            scanf("%s", nome[i]);                     //TROCAR P FGETS PRA NOME COMPLETO


            email[i] = (char*) malloc(30 * sizeof(char));
            printf("Digite o email do usuario: ");
            scanf("%s", emailValidacao);
            if (strchr(emailValidacao, '@') != NULL) {
                strcpy(email[i], emailValidacao);
            } else {
                printf("Email informado invalido!");
                break;
            }


            sexo[i] = (char*) malloc(30 * sizeof(char));
            printf("Digite o sexo do usuario: ");
            scanf("%s", sexoValidacao);                // COLOCAR FGETS PARA NAO DECLARAR FUNCIONAR

            if ( strcmp(sexoValidacao, feminino) == 0 || strcmp(sexoValidacao, masculino) == 0 || strcmp(sexoValidacao, naoDeclarar) == 0){
                strcpy(sexo[i], sexoValidacao);
            } else {
                printf("Sexo informado invalido!");
                break;
            }


            endereco[i] = (char*) malloc(30 * sizeof(char));
            printf("Digite o endereco do usuario: ");
            scanf("%s", endereco[i]);

            altura[i] = (double*) malloc(sizeof(double));
            alturaValidacao = (double*) malloc(sizeof(double));
            printf("Digite a altura do usuario: ");
            scanf("%lf", &alturaValidacao);
            if (alturaValidacao > 1 && alturaValidacao < 2){
                id[i] = rand();
                altura[i] = alturaValidacao;
            } else {
                printf("Altura invalida!");
                break;
            }



            printf("Deseja informar outro usuario? (1=Sim 2=Nao): ");
            scanf("%d", &continuar);
            if (continuar == 2) {
                break;
            } 
        }

        break;

     case 2:     // EDITAR USUARIO


        dadoEditadoDouble = (double*) malloc(sizeof(double));
        printf("Qual usuario deseja editar? ");
        scanf("%d", &usuarioEdt);
        printf("Qual dado do usuario deseja editar? (id, nome, email, sexo, endereco, altura e vacina): ");
        scanf("%s", dadoUsuarioEdt);
        if (strcmp(dadoUsuarioEdt, "altura") == 0){
            printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
            scanf("%lf", &dadoEditadoDouble);
        } else {
            printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
            scanf("%s", dadoEditado);
        }


      
        if (strcmp(dadoUsuarioEdt, "nome") == 0){
            strcpy(nome[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, nome[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "id") == 0){
            strcpy(id[usuarioEdt], dadoEditado);    
            printf("Atualizado! O campo %s do usuario[%d] ficou: %d\n", dadoUsuarioEdt, usuarioEdt, id[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "email") == 0){
            strcpy(email[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, email[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "sexo") == 0){
            strcpy(sexo[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, sexo[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "endereco") == 0){
            strcpy(endereco[usuarioEdt], dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuarioEdt, usuarioEdt, endereco[usuarioEdt]);
        } else if (strcmp(dadoUsuarioEdt, "altura") == 0){
            altura[usuarioEdt] = dadoEditadoDouble;
           printf("Atualizado! O campo %s do usuario[%d] ficou: %lf\n", dadoUsuarioEdt, usuarioEdt, altura[usuarioEdt]);
        } 



    case 3:     //EXCLUIR USUARIO
    



    case 4:     //BUSCAR USUARIO POR EMAIL

        printf("Digite o email do usuario que deseja buscar: ");
        scanf("%s", buscarEmail);
        for (i=0; i<1000; i++){
            if (strcmp(buscarEmail, email[i]) == 0){
                printf("%d\t%s\t%s\t%s\t%s\t%lf\n", id[i], nome[i], email[i], sexo[i], endereco[i], altura[i]);
            }

        }

    case 5: 
     
    for (i=0; i<contagem; i++){
        if (nome[i] != NULL){
            printf("%d\t%s\t%s\t%s\t%s\t%lf\n", id[i], nome[i], email[i], sexo[i], endereco[i], altura[i]);
        }
    }

        

    default:
        break;
    }

    printf("Deseja finalizar o programa? (0=Nao 1=Sim): ");
    scanf("%d", &finalizarPrograma);
}

// printf("%d\t%s\t%s\t%s\t%s\t%lf\t", id[0], nome[0], email[0], sexo[0], endereco[0], altura[0]);
// printf("%d\t%s\t%s\t%s\t%s\t%lf\t", id[1], nome[1], email[1], sexo[1], endereco[1], altura[1]);















}