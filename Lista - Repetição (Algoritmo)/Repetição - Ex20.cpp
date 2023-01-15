#include <stdio.h>
int main(){
    int ABAC = 5.00, MACA = 1.00, PERA = 4.00, opcMenu, fruta, quantAbac, quantMaca;
    float total = 0;
    char voltar = 'r';

    printf ("Bem-Vindo(a) a sua compra de frutas\n");
    printf ("Digite 1 para comecar\n");
    scanf  ("%d", &opcMenu);

    if(opcMenu == 1){
        while(voltar == 'R' || voltar == 'r'){
            printf ("\nSelecione as frutas abaixo:\n");
            printf ("1. Abacaxi (R$ %.2f)\n", ABAC);
            printf ("2. Maca (R$ %.2f)\n", MACA);
            printf ("3. Pera (R$ %.2f)\n", PERA);
            printf ("\nTotal: R$%.2f\n", total);
            printf ("Digite 0 para encerrar\n");
            scanf  ("%d", &fruta);
            switch (fruta){
                case 0:
                        voltar = 's';
                        break;

                case 1:
                        printf ("\nSelecionado: Abacaxi (R$ %.2f)\n", ABAC);
                        printf ("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf  ("%d", &quantAbac);

                        total = total + (quantAbac * ABAC);

                        break;
                case 2:
                        printf ("\nSelecionado: Maca (R$ %.2f)\n", MACA);
                        printf ("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf  ("%d", &quantMaca);

                        total = total + (quantMaca * MACA);
                        break;
                case 3:
                        printf ("\nSelecionado: Pera (R$ %.2f)\n", PERA);
                        printf ("digite a quantidade que deseja comprar (0 para voltar): ");
                        scanf  ("%d", &quantMaca);

                        total = total + (quantMaca * PERA);
                        break;


                default:
                printf ("Opcao invalida, digite R para retornar: ");
                scanf  (" %c", &voltar);
            }


        }
    printf ("-------------==-------------\nPrograma encerrado\nSeu Total: R$%.2f", total);
    } else
    printf ("-------------==-------------\nPrograma encerrado\nSeu Total: R$%.2f", total);

}
    
    
