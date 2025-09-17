/**
 * This program prompts the user to enter the minimum and maximum stock values,
 * computes the average stock using the formula:
 *      average_stock = (minimum_stock + maximum_stock) / 2
 * and displays the result.
 *
 * Usage:
 *  - The user is asked to input integer values for minimum and maximum stock.
 *  - The program outputs the calculated average stock.
 */
#include <stdio.h>

int main() {
    int minimum_stock, maximum_stock, average_stock;
    printf("Enter the minimum stock: ");
    scanf("%d", &minimum_stock);
    printf("Enter the maximum stock: ");
    scanf("%d", &maximum_stock);
    average_stock = (minimum_stock + maximum_stock) / 2;
    printf("The average stock is: %d\n", average_stock);
    return 0;
}