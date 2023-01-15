#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct usuario {
    char nome[30], email[30], sexo[30], endereco[30];
    int id;
    double altura;
    bool vacina;
};


int main (){
    int i, continuar, escolha, finalizarPrograma, usuarioEdt;
    char dadoUsuario[15], dadoEditado[20];
    double dadoEditadoDouble;
    struct usuario usuarios[1000];



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
            double alturaValidacao;
            char feminino[10], masculino[10], naoDeclarar[15];

            strcpy(feminino, "Feminino");
            strcpy(masculino, "Masculino");
            strcpy(naoDeclarar, "Nao declarar");



            usuarios[i].id = rand();
            printf("Digite o nome do usuario: ");           
            scanf("%s", usuarios[i].nome);                     //TROCAR P FGETS PRA NOME COMPLETO
            printf("Digite o email do usuario: ");
            scanf("%s", emailValidacao);
            if (strchr(emailValidacao, '@') != NULL) {
                strcpy(usuarios[i].email, emailValidacao);
            } else {
                printf("Email informado invalido!");
                break;
            }
            printf("Digite o sexo do usuario: ");
            scanf("%s", sexoValidacao);                // COLOCAR FGETS PARA NAO DECLARAR FUNCIONAR

            if ( strcmp(sexoValidacao, feminino) == 0 || strcmp(sexoValidacao, masculino) == 0 || strcmp(sexoValidacao, naoDeclarar) == 0){
                strcpy(usuarios[i].sexo, sexoValidacao);
            } else {
                printf("Sexo informado invalido!");
                break;
            }

            printf("Digite o endereco do usuario: ");
            scanf("%s", usuarios[i].endereco);
            printf("Digite a altura do usuario: ");
            scanf("%lf", &alturaValidacao);
            if (alturaValidacao > 1 && alturaValidacao < 2){
                usuarios[i].altura = alturaValidacao;
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

        printf("Qual usuario deseja editar? ");
        scanf("%d", &usuarioEdt);
        printf("Qual dado do usuario deseja editar? (id, nome, email, sexo, endereco, altura e vacina): ");
        scanf("%s", dadoUsuario);
        if (strcmp(dadoUsuario, "altura") == 0){
            printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
            scanf("%lf", &dadoEditadoDouble);
        } else {
        printf("Digite a informacao desejada para o preenchimento do dado a ser editado: ");
        scanf("%s", dadoEditado);
        }
        
        if (strcmp(dadoUsuario, "nome") == 0){
            strcpy(usuarios[usuarioEdt].nome, dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].nome);
        } else if (strcmp(dadoUsuario, "id") == 0){
            strcpy(usuarios[usuarioEdt].id, dadoEditado);    
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].id);
        } else if (strcmp(dadoUsuario, "email") == 0){
            strcpy(usuarios[usuarioEdt].email, dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].email);
        } else if (strcmp(dadoUsuario, "sexo") == 0){
            strcpy(usuarios[usuarioEdt].sexo, dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].sexo);
        } else if (strcmp(dadoUsuario, "endereco") == 0){
            strcpy(usuarios[usuarioEdt].endereco, dadoEditado);
            printf("Atualizado! O campo %s do usuario[%d] ficou: %s\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].endereco);
        } else if (strcmp(dadoUsuario, "altura") == 0){
            usuarios[usuarioEdt].altura = dadoEditadoDouble;
            printf("Atualizado! O campo %s do usuario[%d] ficou: %lf\n", dadoUsuario, usuarioEdt, usuarios[usuarioEdt].altura);
        } 



    case 3:     //EXCLUIR USUARIO
    





    default:
        break;
    }

    printf("Deseja finalizar o programa? (0=Nao 1=Sim): ");
    scanf("%d", &finalizarPrograma);
}



}


