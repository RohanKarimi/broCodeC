#include <stdio.h>

int main (void){
    /* switch = A more efficient alternative to using many else if statements
                allows a value to be tested for equality against many cases */          

    char grade = 0;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);
    printf("\n");

    switch(grade){
        case 'A': 
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least is not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades\n");
    }
}