#include <stdio.h>

int main(){
    double radius, area;
    const double pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}