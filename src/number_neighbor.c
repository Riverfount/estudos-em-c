/**
 * @file number_neighbor.c
 * @brief Program to display the neighboring integers of a given number.
 *
 * This program prompts the user to enter an integer and then prints
 * the two neighboring integers (one less and one greater than the input).
 *
 * Usage:
 *   - The user is asked to input an integer.
 *   - The program outputs the previous and next integers relative to the input.
 *
 * Example:
 *   Enter an integer: 5
 *   The neighbors of 5 are 4 and 6.
 * 
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("The neighbors of %d are %d and %d.\n", number, number - 1, number + 1);
    return 0;
}