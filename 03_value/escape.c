#include<stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf("$________\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,12.0*salary);
    // Gee会填补制表符内的前面位置，而不是挤在制表符外让后面的话整体后移
    printf("\rGee!\n");

    printf("\n\t$%.2f a month is $%.2f a year.",salary,12.0*salary);
    printf("Gee!\n");

    return 0;
}