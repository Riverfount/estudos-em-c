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