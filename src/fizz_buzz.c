#include <stdio.h>

int fizz_buzz(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (num % 3 == 0) {
        printf("Fizz\n");
    } else if (num % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", num);
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 100; i++) {
        fizz_buzz(i);
    }
    return 0;
}