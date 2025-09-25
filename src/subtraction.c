#include <stdio.h>

int main(){
    int num1, num2, abs_diff;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2){
        abs_diff = num1 - num2;
    } else {
        abs_diff = num2 - num1;
    }
    printf("The absolute difference between %d and %d is %d\n", num1, num2, abs_diff);
    return 0;
}