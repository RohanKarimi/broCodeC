#include <stdio.h>

// prototype
void hello(char[], int); 

int main (void){
/* Function Prototype
        What it is? 
            Function declaration, w/o a body, before main()
            Ensures that calls to a function are made with the correct arguments

        Important Notes
            Many C compilers don't check for parameter matching
            Missing arguments will result in unexpected behavior
            A function prototype causes the compile to flag an error if arguments are missing

        Advantages
            Easier to navigate a program with main() at the top
            Helps with debugging
            Commonly used in header files
*/

    char name[] = "Tsuru";
    int age = 18;
    
    hello(name, age);

return 0;
}

    void hello(char name[], int age)
    {
        printf("\nHello, %s", name);
        printf("\nYou are %d years old", age);
    }