#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("The neighbors of %d are %d and %d.\n", number, number - 1, number + 1);
    return 0;
}