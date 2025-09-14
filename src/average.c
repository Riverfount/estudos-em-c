/**
 * @file average.c
 * @brief Calculates the arithmetic average of two integers entered by the user.
 *
 * This program prompts the user to input two integer values, computes their arithmetic average,
 * and displays the result with two decimal places.
 *
 * Steps:
 * 1. Prompts the user to enter two integers.
 * 2. Reads the input values.
 * 3. Calculates the average as a floating-point value.
 * 4. Prints the result.
 *
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
   int a, b;
   double average;
   printf("Enter an integer: ");
   scanf("%d", &a);
   printf("Enter another integer: ");
   scanf("%d", &b);
   average = (float)(a + b) / 2;
   printf("The arithmetic average between %d and %d is %.2f\n", a, b, average);
   return 0;
}