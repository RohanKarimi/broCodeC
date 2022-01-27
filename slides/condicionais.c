#include <stdio.h>

int main()
{
    int idade = 71;

    if(idade < 18)
    {
        printf("Não pode entrar na baladinha\n");
    }
    else if (idade > 70)
    {
        printf("O que esta fazendo aqui, coroa?\n");
    }
    else // senão for menor de 18
    {
        printf("Pode colar no rolezinho\n");
    }
}