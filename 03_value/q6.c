#include<stdio.h>
int main(void)
{   // float可以e，double不能e
    float weight;
    printf("number:");
    scanf("%f",&weight);
    float g = weight*950;
    printf("Is %e.",g*1.0e+23/3);
    return 0;
}