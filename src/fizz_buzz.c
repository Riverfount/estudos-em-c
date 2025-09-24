#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d",  &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (number % 3 == 0) {
        printf("Fizz\n");
    } else if (number % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", number);
    }
    return 0;
}