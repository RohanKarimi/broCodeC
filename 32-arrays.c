#include <stdio.h>

int main(void)
{
    // array = a data structure that can store many values of the same data type.

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) // sizeof(prices) = 48 bytes, divided by princes[0] = 8 bytes. Will be 6!
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}