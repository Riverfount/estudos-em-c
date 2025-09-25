#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    double result;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);
    printf("Enter the fourth integer: ");
    scanf("%d", &num4);
    result = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4);
    printf("The sum of the squares is: %.2lf\n", result);
    return 0;
}
