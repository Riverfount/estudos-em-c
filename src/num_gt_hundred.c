#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 100) {
        printf("The number is greater than 100.\n");
    } else {
        printf("The number is not greater than 100.\n");
    }

    return 0;
}