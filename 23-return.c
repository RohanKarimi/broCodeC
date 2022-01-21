#include <stdio.h>

double square(double num){
    return num * num;
}
int main(){
    double x = square(3);

    printf("%.2lf", x);
    return 0;
}