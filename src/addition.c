/**
 * @file addition.c
 * @brief Simple program to add two integers entered by the user.
 *
 * This program prompts the user to input two integer values,
 * calculates their sum, and displays the result.
 *
 * Usage:
 *  - The user is asked to enter two integers.
 *  - The program computes the sum of the entered numbers.
 *  - The result is printed to the standard output.
 *
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(void) {
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}