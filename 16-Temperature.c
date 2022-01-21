#include <stdio.h>
#include <ctype.h>

int main (){

    char unit = 0;
    float temp = 0;

    printf("\n Is the temperature in (F) or (C)?: ");
    scanf("%c", &unit);
    
    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in fahrenheits is: %.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in Fahrenheits: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in celsius is: %.1f", temp);
    }
    else
    {
        printf("\n %c is not a valid unit of measuremente", unit);
    }
}