#include <stdio.h>

int main() {
    int num1, num2;
    double result;
    printf("Enter the base number: ");
    scanf("%d", &num1);
    printf("Enter the exponent number: ");
    scanf("%d", &num2);
    result = 1;
    for(int i = 0; i < num2; i++) {
        result *= num1;
}
    printf("%d raised to the power of %d is %.0f\n", num1, num2, result);
    return 0;
}