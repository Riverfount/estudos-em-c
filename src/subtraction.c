
/**
 * @file subtraction.c
 * @brief Calculates the absolute difference between two integers entered by the user.
 *
 * This program prompts the user to input two integer values, computes the absolute
 * difference between them, and displays the result. The calculation is performed
 * using a simple conditional statement to ensure the difference is always positive.
 *
 * Usage:
 *   - The user is asked to enter two integers.
 *   - The program outputs the absolute difference between the entered values.
 *
 * Example:
 *   Enter the first number: 8
 *   Enter the second number: 3
 *   The absolute difference between 8 and 3 is 5
 * 
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    int num1, num2, abs_diff;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2){
        abs_diff = num1 - num2;
    } else {
        abs_diff = num2 - num1;
    }
    printf("The absolute difference between %d and %d is %d\n", num1, num2, abs_diff);
    return 0;
}