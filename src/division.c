/**
 * @file div.c
 * @brief Simple program to perform division between two integers.
 *
 * Prompts the user to enter two integers, then calculates and displays the result
 * of dividing the first number by the second. Handles division by zero by displaying
 * an error message.
 *
 * Usage:
 *  - The user is prompted to input two integers.
 *  - If the second integer is not zero, the program prints the result of the division
 *    with three decimal places.
 *  - If the second integer is zero, an error message is displayed.
 *
 * Note:
 *  - The division result is cast to float for decimal precision.
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    int num1, num2;
    float div;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num2 != 0){
        div = (float)num1 / num2;
        printf("The division of %d by %d is %.3f\n", num1, num2, div);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}