#include <stdio.h>
#include <string.h>

int main (void){

    char string1[] = "Bro";
    char string2[] = "Code";

    strlwr(string1);                // converts a string to lowercase
    strupr(string1);                // converts a string to uppercase
    strcat(string1, string2);       // appends string2 to end of string1
    strncat(string1, string2, 1);   // appends n characters from string2 to string1
    strcpy(string1, string2);       // copy string2 to string1
    strncpy(string1, string2, 4)    // copy n characters of string2 to string1

    
}