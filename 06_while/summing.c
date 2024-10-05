#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;

    int status;
    printf("Please enter an integer to be summed");
    printf("(q to quit):");

    status = scanf("%ld", &num);

    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (a to quit )");
        status = scanf("%ld", &num); //是否读取一个整数，任何非数值的东西会让这句scanf值为0
        printf("Now the status is %ld\n",status);
    }

    printf("Those ingeters sum to %ld.\n", sum);

    return 0;
}