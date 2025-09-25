#include <stdio.h>

int main(){
    int num, double_num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    double_num = num * 2;
    printf("The double of %d is %d\n", num, double_num);
}