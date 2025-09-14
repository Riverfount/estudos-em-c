/**
 * @file circle_area.c
 * @brief Program to calculate the area of a circle given its radius.
 *
 * This program prompts the user to enter the radius of a circle,
 * calculates the area using the formula area = π * radius^2,
 * and displays the result.
 *
 * Usage:
 *   - The user is asked to input the radius (as a double).
 *   - The program computes and prints the area with two decimal places.
 *
 * Constants:
 *   - pi: The value of π (3.14159) used for calculation.
 *
 * Returns:
 *   - 0 on successful execution.
 * 
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    double radius, area;
    const double pi = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}