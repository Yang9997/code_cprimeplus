#include <stdio.h>
#define PI 3.14259
int main(void)
{
    float circum, area, radius;

    printf("What is the radios of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}