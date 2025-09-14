/**
 * @file discount.c
 * @brief Calculates the final price of a product after applying a discount percentage.
 *
 * This program prompts the user to enter the price of a product and a discount percentage,
 * then computes and displays the final price after applying the discount.
 *
 * Steps:
 * 1. Reads the product price from user input.
 * 2. Reads the discount percentage from user input.
 * 3. Calculates the discounted price.
 * 4. Displays the final price with two decimal places.
 *
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    float price, discount, final_price;
    printf("Enter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the discount percentage: ");
    scanf("%f", &discount);
    final_price = price - (price * discount / 100);
    printf("The final price with discount is: %.2f\n", final_price);
    return 0;
}