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