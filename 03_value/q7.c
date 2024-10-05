#include<stdio.h>
int main(void)
{
    float height;
    printf("How tall:");
    scanf("%f",&height);
    printf("%fcm",2.54*height);
    return 0;
}