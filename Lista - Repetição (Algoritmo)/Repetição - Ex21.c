#include <stdio.h>
int main() {
	char sexo;
    char colhos;
    char ccabelos;
    int idade;
    double salario;
    char pessoa [100];
    int index = 0, totNaoSeEnquadra = 0, totSeEnquadra = 0;
    while(1) {
        while(1) {
            printf("Sexo : ");
            fflush(stdin);
            scanf("%c", &pessoas[index].sexo);
            if(pessoas[index].sexo != 'm' && pessoas[index].sexo != 'f') {
                printf("Sexo invalido, tente novamente.\n");
                continue;
            }
            break;
        }
        while(1) {
            printf("Cor dos Olhos : ");
            fflush(stdin);
            scanf("%c", &pessoas[index].colhos);
            if(pessoas[index].colhos != 'a' && pessoas[index].colhos != 'v' &&
            pessoas[index].colhos != 'c' && pessoas[index].colhos != 'p') {
                printf("Cor dos Olhos invalida, tente novamente.\n");
                continue;
            }
            break;
        }
        while(1) {
            printf("Cor dos Cabelos : ");
            fflush(stdin);
            scanf("%c", &pessoas[index].ccabelos);
            if(pessoas[index].ccabelos != 'l' && pessoas[index].ccabelos != 'c' &&
            pessoas[index].ccabelos != 'p' && pessoas[index].ccabelos != 'r') {
                printf("Cor dos Cabelos invalida, tente novamente.\n");
                continue;
            }
            break;
        }
        while(1) {
            printf("Idade : ");
            fflush(stdin);
            scanf("%d", &pessoas[index].idade);
            if(pessoas[index].idade == -1) {
                printf("Fim do cadastro de pessoas.\n");
                goto label;
            }
            else if(pessoas[index].idade < 10 || pessoas[index].idade > 100) {
                printf("Idade invalida, tente novamente.\n");
                continue;
            }
            break;
        }
        while(1) {
            printf("Salario : ");
            fflush(stdin);
            scanf("%d", &pessoas[index].salario);
            if(pessoas[index].salario < 0) {
                printf("Salario invalido, tente novamente.\n");
                continue;
            }
            break;
        }
        index++;
        printf("\n");
    }
    label:
    for(int i = 0; i < index; i++) {
        if(pessoas[i].sexo == 'f' && pessoas[i].idade >= 18 &&
        pessoas[i].idade <= 35 && pessoas[i].colhos == 'c' &&
        pessoas[i].ccabelos == 'c')
            totSeEnquadra++;
        else
            totNaoSeEnquadra++;
    }
    printf("\n");
    printf("A porcentagem de individuos do sexo feminino, com idade entre 18\n");
    printf("e 35 anos e que tenham olhos castanhos e cabelos castanhos e de:\n");
    printf("%.2f%%", ((float) totSeEnquadra / ((float) totNaoSeEnquadra + (float) totSeEnquadra))*100);
    return 0;
}
