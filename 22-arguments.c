#include <stdio.h>

void birthday(char x[], int y){
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main(void){
    char name[] = "Tsuru";
    int age = 18;

    birthday(name, age);

    return 0;
}