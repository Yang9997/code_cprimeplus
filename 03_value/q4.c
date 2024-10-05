#include<stdio.h>
int main(void)
{
    float f;
    printf("Enter a floating-point value:");
    scanf("%f",&f);
    printf("fixed-point notation:%f\n",f);
    printf("expoenential notation:%e\n",f);
    printf("p natation:%a",f);

    return 0;
}