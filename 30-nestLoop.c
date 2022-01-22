#include <stdio.h>

int main(void)
{
    // nested loops = a loop inside of another loop
    
    int rows = 0;
    int columns = 0;
    char symbol = 0;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // get rid of \n from the last scanf

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0; 
}