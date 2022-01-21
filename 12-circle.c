#include <stdio.h>

int main(void){
    const double PI = 3.14159;
    double radius = 0;
    double circumference = 0;
    double area = 0;

    printf("\n Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("%.2lf\n", circumference);
    printf("%.2lf\n", area);
}