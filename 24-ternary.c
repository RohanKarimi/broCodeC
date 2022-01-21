#include <stdio.h>

// prototype
int findMax (int x, int y)
{
    if (x > y) 
    {
        return x;
    }
    else
    {
        return y;
    }
}


int main()
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    
    int max = findMax(4, 5);

    printf("%d", max);

    return 0;
}