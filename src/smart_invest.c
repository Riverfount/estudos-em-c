/**
 * @file smart_invest.c
 * @brief A simple C program to calculate simple interest and total amount after a given period.
 *
 * This program prompts the user to enter the principal amount, rate of interest (in percentage),
 * and time period (in years). It then calculates the simple interest using the formula:
 *      Simple Interest = (Principal * Rate * Time) / 100
 * and displays both the calculated interest and the total amount after the specified time.
 *
 * Usage:
 *  - Enter the principal amount (integer).
 *  - Enter the rate of interest (float, in percentage).
 *  - Enter the time period (float, in years).
 *
 * Output:
 *  - Displays the calculated simple interest.
 *  - Displays the total amount after the specified time period.
 *
 * @author river
 * @date 2025
 */

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