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