/**
 * This program prompts the user to enter the current dollar exchange rate and an amount in US dollars.
 * It then calculates and displays the equivalent amount in Brazilian reais.
 *
 * Steps:
 * 1. Prompts the user for the dollar exchange rate.
 * 2. Prompts the user for the amount in dollars.
 * 3. Calculates the amount in reais by multiplying the amount in dollars by the exchange rate.
 * 4. Displays the result formatted to two decimal places.
 *
 */
#include <stdio.h>

int main() {
    double dollar_exchange_rate, amount_in_dollars, amount_in_reais;
    printf("Enter the dollar exchange rate: ");
    scanf("%lf", &dollar_exchange_rate);
    printf("Enter the amount in dollars: ");
    scanf("%lf", &amount_in_dollars);
    amount_in_reais = amount_in_dollars * dollar_exchange_rate;
    printf("The amount in reais is: R$%.2lf\n", amount_in_reais);
    return 0;
}