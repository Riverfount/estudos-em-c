#include <stdio.h>


int main() {
    int num1, num2, num3, num4;
    double average;
    printf("Enter first integers: ");
    scanf("%d", &num1);
    printf("Enter second integers: ");
    scanf("%d", &num2);
    printf("Enter third integers: ");
    scanf("%d", &num3);
    printf("Enter fourth integers: ");
    scanf("%d", &num4);
    average = (float)(num1 + num2 + num3 + num4) / 4;
    printf("The arithmetic average between %d, %d, %d and %d is %.2f\n", num1, num2, num3, num4, average);
    return 0;
}