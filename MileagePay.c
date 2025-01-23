#include<stdio.h>
 int main()
{
float startOdometer, endOdometer, distance, Pay;
const float RATE_PER_MILE = 0.35;
printf("Enter beginning odometer reading: ");
scanf("%f", &startOdometer);
printf("Enter ending odometer reading: ");
scanf("%f", &endOdometer);
distance=endOdometer - startOdometer;
Pay = distance * RATE_PER_MILE;
printf("\n--- Mileage Pay Calculator ---\n");
printf("Distance travelled:%.2f MILES\n", distance);
printf("At $0.35 per mile, you have to pay %.2f $", Pay);
return 0;
} 