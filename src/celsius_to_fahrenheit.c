/**
 * @file celsius_to_fahrenheit.c
 * @brief Converts a temperature from Celsius to Fahrenheit.
 *
 * This program prompts the user to enter a temperature in Celsius,
 * converts it to Fahrenheit using the formula: F = (C * 9/5) + 32,
 * and displays the result.
 *
 * Usage:
 *   Run the program and input a temperature in Celsius when prompted.
 *   The program will output the equivalent temperature in Fahrenheit.
 * 
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit\n", celsius, fahrenheit);
    return 0;
}