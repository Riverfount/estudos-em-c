/**
 * This program prompts the user to input the lengths of the minor base, major base,
 * and the height of a trapezium. It then calculates the area using the formula:
 *     area = ((base_minor + base_major) * height) / 2
 * and displays the result with two decimal places.
 *
 * Inputs:
 *   - Length of the minor base (int)
 *   - Length of the major base (int)
 *   - Height (int)
 *
 * Output:
 *   - Area of the trapezium (float, printed to two decimal places)
 */
#include <stdio.h>

int main() {
    int base_minor, base_major, height;
    float area;
    printf("Enter the length of the minor base: ");
    scanf("%d", &base_minor);
    printf("Enter the length of the major base: ");
    scanf("%d", &base_major);
    printf("Enter the height: ");
    scanf("%d", &height);
    area = ((base_minor + base_major) * height) / 2.0;
    printf("The area of the trapezium is: %.2f\n", area);
    return 0;
}