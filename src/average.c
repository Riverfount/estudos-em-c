#include <stdio.h>

int main(){
   int a, b;
   double average;
   printf("Enter an integer: ");
   scanf("%d", &a);
   printf("Enter another integer: ");
   scanf("%d", &b);
   average = (float)(a + b) / 2;
   printf("The arithmetic average between %d and %d is %.2f\n", a, b, average);
   return 0;
}