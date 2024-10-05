#include<stdio.h>
int main(void)
{
    int age;
    double temp = 3.156e+7;
    printf("How old are you?");
    scanf("%d",&age);
    printf("That is %.f s",temp*age);

    return 0;
}