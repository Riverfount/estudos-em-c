/**
 * @file double.c
 * @brief Program to calculate and display the double of an integer input by the user.
 *
 * This program prompts the user to enter an integer value, computes its double,
 * and prints the result to the standard output.
 *
 * Usage:
 *   Run the program and enter an integer when prompted.
 *   The program will display the double of the entered integer.
 *
 * Example:
 *   Enter an integer: 5
 *   The double of 5 is 10
 * 
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    int num, double_num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    double_num = num * 2;
    printf("The double of %d is %d\n", num, double_num);
}