/**
 * @file velocity.c
 * @brief Calculates the average speed based on user input for distance and time.
 *
 * This program prompts the user to enter the distance traveled (in kilometers)
 * and the time spent (in hours). It then calculates the average speed using
 * the formula: averageSpeed = distance / timeSpent, and displays the result
 * formatted to two decimal places.
 *
 * Usage:
 *   - Enter the distance traveled when prompted.
 *   - Enter the time spent when prompted.
 *   - The program will output the calculated average speed in km/h.
 *
 * @author river
 * @date 2025
 */
#include <stdio.h>

int main(){
    double distance, timeSpent, averageSpeed;
    printf("Enter the distance traveled (in km): ");
    scanf("%lf", &distance);
    printf("Enter the time spent (in hours): ");
    scanf("%lf", &timeSpent);
    averageSpeed = distance / timeSpent;
    printf("The average speed is: %.2f km/h\n", averageSpeed);
    return 0;
}