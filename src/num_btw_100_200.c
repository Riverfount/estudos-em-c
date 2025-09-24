#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 100 && number < 200) {
        printf("The number %d is between 100 and 200.\n", number);
    } else {
        printf("The number %d is not between 100 and 200.\n", number);
      
    }

    return 0;
}