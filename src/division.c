#include <stdio.h>

int main(){
    int num1, num2;
    float div;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num2 != 0){
        div = (float)num1 / num2;
        printf("The division of %d by %d is %.3f\n", num1, num2, div);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}