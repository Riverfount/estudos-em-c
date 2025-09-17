/**
 * This program prompts the user to enter a product code, quantity, and price.
 * It then calculates and displays the total value for the specified product.
 *
 * Steps:
 * 1. Reads product code from user input.
 * 2. Reads quantity of the product.
 * 3. Reads price per unit of the product.
 * 4. Calculates the total value (quantity * price).
 * 5. Prints the total value with the product code.
 *
 */
#include <stdio.h>

int main() {
    int code, quantity;
    double price, total;
    printf("Enter product code: ");
    scanf("%d", &code);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price of the product: ");
    scanf("%lf", &price);
    total = quantity * price;
    printf("The total amount of product %d is: US$%.2lf\n", code, total);
    return 0;
}