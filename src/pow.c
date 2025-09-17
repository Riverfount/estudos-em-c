/*
 * This program calculates the result of raising a base number to an exponent (power).
 *
 * The user is prompted to enter two integers:
 *   - The base number (num1)
 *   - The exponent number (num2)
 *
 * The program then computes num1 raised to the power of num2 using a loop,
 * multiplying the base by itself exponent times.
 *
 * The result is displayed as:
 *   "<base> raised to the power of <exponent> is <result>"
 *
 * Example:
 *   Input: 2 (base), 3 (exponent)
 *   Output: 2 raised to the power of 3 is 8
 */
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