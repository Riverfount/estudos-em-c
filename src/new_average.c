/*
 * This program calculates the arithmetic average of four integers entered by the user.
 *
 * Steps:
 * 1. Prompts the user to input four integer values.
 * 2. Reads the input values from standard input.
 * 3. Computes the average of the four integers as a floating-point number.
 * 4. Displays the result with two decimal places.
 *
 * Usage:
 * Run the program and follow the prompts to enter four integers.
 * The program will output their arithmetic average.
 */
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