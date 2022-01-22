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

    strset(string1, '?');           // sets all characters of a string to a given character
    strnset(string1, 'x', 1);       // sets first n characters of a string to a given character
    strrev(string1);                // reverses a string

    strlen(string1);                // returns string length as int
    strcmp(string1, string2);       // compare all characters, check if is the same
    strncmp(string1, string2, 1);   // compare n characters
    strcmpi(string1, string1);      // string compare all (ignore case)
    strnicmp(string1, string1, 1);  // string compare n characters (ignore case)
}