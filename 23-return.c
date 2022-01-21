#include <stdio.h>

double square(double num){
    double result = num * num;
    return result;
}
int main(){
    double x = square(3);

    printf("%.2lf", x);
    return 0;
}