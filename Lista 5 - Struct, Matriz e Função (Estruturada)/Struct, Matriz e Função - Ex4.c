#include <stdio.h>

struct dieta{
    
    char nome[25];
    float peso, calorias;

};

struct dieta dieta[2][2];

void matrizInput(int lin, int col){

            
    printf("Nome do alimento: ");
    fgets(dieta[lin][col].nome, 25, stdin);
    fflush(stdin);
    printf("Peso: ");
    scanf("%f", &dieta[lin][col].peso);
    fflush(stdin);
    printf("Caloria: ");
    scanf("%f", &dieta[lin][col].calorias);
    fflush(stdin);

  
}

void printaTudo(){

    for(int i=0; i<2; i++){
                for(int j=0; j<2; j++){
                    printf("Nome: %s\n", dieta[i][j].nome);
                    printf("Peso: %.2f\n",dieta[i][j].peso);
                    printf("Calorias: %.2f\n",dieta[i][j].calorias);
                    printf("\n");
                }
            }
            
}

int main(void){

    int lin, col, opt;
    char loopOpt;

    do{
        printf("[1] Inserir dados na matriz\n[2] Mostrar dados inseridos\n");
        scanf("%d", &opt);
        fflush(stdin);

        switch (opt){

        case 1:

            printf("Informe a linha que deseja editar na matriz: ");
            scanf("%d", &lin);
            printf("Informe a coluna: ");
            scanf("%d", &col);
            fflush(stdin);

            matrizInput(lin, col);

            break;

        case 2:

            printaTudo();

            break;
        
        default:
            break;
        }
        printf("\n");
        printf("Repetir?: ");
        scanf("%c", &loopOpt);
        fflush(stdin);

    }while(loopOpt != 'n');

    
        

    return 0;
}
