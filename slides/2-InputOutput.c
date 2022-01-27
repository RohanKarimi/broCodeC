#include <stdio.h>

int main(void)
{

  //  printf("Ola pessoal, essa e uma demonstracao da funcao printf()\n");
        char nome[30]; // string = texto
        char letra; // letra *1*
        int idade; // numero inteiro
        float altura; // numero com ponto 1.50 1.60
        double PI; // 3.1415926 numero com ponto gigante

        printf("Digite o seu nome: "); // Saída / Output escreva
        scanf("%s", &nome); // Entrada / Input leia

        printf("\nDigite a sua idade: "); // saida
        scanf("%d", &idade); // entrada

        printf("\nDigite a sua altura: ");
        scanf("%f", &altura);

        printf("\nDigite o valor de PI: "); // pode digitar qualquer valor grande com float (ponto flutuante = 0.5) e aleatório
        scanf("%lf", &PI); // lf = long float

        // TESTES
        printf("\n");
        printf("###################################\n");
        printf("Meu nome e %s, muito prazer!\n", nome);
        printf("Tenho %d anos\n", idade);
        printf("Minha altura: %.2f\n", altura);
        printf("PI: %.4lf\n", PI); // lf = long float

}