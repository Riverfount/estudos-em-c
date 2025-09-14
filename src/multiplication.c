/**
 * @file multiplication.c
 * @brief Simple program to multiply two integers entered by the user.
 *
 * This program prompts the user to input two integer values,
 * calculates their product, and displays the result.
 *
 * Usage:
 *  - The user is asked to enter two integers.
 *  - The program multiplies the entered values.
 *  - The result is printed to the standard output.
 *
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    int num1, num2, prod;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    prod = num1 * num2;
    printf("The multiplication of %d and %d is %d\n", num1, num2, prod);
    return 0;
}