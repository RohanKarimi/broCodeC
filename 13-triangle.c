#include <stdio.h>
#include <math.h>

int main(void){
    double A = 0;
    double B = 0;
    double C = 0;

    printf("Enter the side A: ");
    scanf("%lf", &A);

    printf("Enter the side B: ");
    scanf("%lf", &B);  

    C = sqrt(A*A + B*B);

    printf("Side C: %.2lf", C);
    return 0;

}