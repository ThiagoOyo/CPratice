#include<stdio.h>
#define peso1 2
#define peso2 3
#define peso3 4
#define peso4 1


// 20. Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
// correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
// respectivamente, para cada uma destas notas e mostre esta média acompanhada pela
// mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a
// mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a
// mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9,
// inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.". No caso do
// aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
// Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
// Recalcule a média (some a pontuação do exame com a média anteriormente calculada e
// divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou
// mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois
// casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma
// mensagem "Media final: " seguido da média final para esse aluno.

int main(){
    float n1, n2, n3, n4, media, notaExame, mediaExame;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o valor da quarta nota: ");
    scanf("%f", &n4);

    media = (n1 * peso1 + n2 * peso2 + n3 * peso3 + n4 * peso4)/4;

    printf("Media: %.2f\n", media);

    if (media >= 7.0){
        printf("Aluno Aprovado");
    } else if (media < 5.0){
        printf("Aluno Reprovado");
    } else if (media > 4.9 && media < 7.0) {
        printf("Aluno em Exame!\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &notaExame);
        mediaExame = (media + notaExame)/2;
        printf("A media final apos exame eh: %.2f\n", mediaExame);
        if (mediaExame >= 5.0){
            printf("Aluno Aprovado!");
        } else if (mediaExame < 5.0){
            printf("Aluno Reprovado!");
        }

    }

}