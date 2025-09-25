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