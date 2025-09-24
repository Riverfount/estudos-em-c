#include <stdio.h>

int main() {
    int number1, number2;
    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);
    if (number1 > number2) {
        printf("%d is greater than %d\n", number1, number2);
    } else {
        printf("%d is greater than %d\n", number2, number1);
    }
}