#include <stdio.h>

//Prototype
void birthday(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main(void){
    char name[] = "Tsuru";
    int age = 18;

    birthday(name, age);

    return 0;
}