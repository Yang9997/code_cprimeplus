#include<stdio.h>
int main()
{
    long num;
    long sum =0L;

    printf("please enter an int number:\n");
    printf("(q to quit)\n");

    while(scanf("%ld",&num)){
        sum+=num;
        printf("please enter an int number:\n");
        printf("(q to quit)\n");
    }

    printf("the sum of these numbers are :%ld",sum);
    return 0;
}