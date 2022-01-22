#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a session of code possibly unlimited times
    // WHILE some conditions remain true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin); 
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou did not enter you name");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin); 
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello, %s", name);

    return 0;
}