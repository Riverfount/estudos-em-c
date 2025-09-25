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