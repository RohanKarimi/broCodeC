#include <stdio.h>

int main (void)
{
    /* switch = A more efficient alternative to using many else if statements
                allows a value to be tested for equality against many cases */          

    char nota; // uma letra 

    printf("\nDigite sua nota(Letra): "); // Pedir minha nota em forma de letra
    scanf("%c", &nota); // Digito a minha nota ENTRADA

    //printf("\n");

    switch(nota){ // escolha (variável)
        case 'A': 
            printf("Perfeito!\n");
            break; // pode parar ae
        case 'B':
            printf("Muito bom!\n");
            break;
        case 'C':
            printf("Okay!\n");
            break;
        case 'D':
            printf("Pelo menos não foi um F!\n");
            break;
        case 'F':
            printf("Patetico!\n");
            break;
        default:
            printf("Voce nao sabe ler? E pra por a nota em letra!!!!!!!!\n");
    }
}
