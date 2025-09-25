#include <stdio.h>


int main(){
    int principal;
    float rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("The simple interest for a principal amount of %d at a rate of %.2f%% over %.2f years is: %.2f\n", principal, rate, time, interest);
    printf("The total amount after %.2f years will be: %.2f\n", time, principal + interest);
    return 0;
}