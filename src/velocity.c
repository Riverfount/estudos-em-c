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