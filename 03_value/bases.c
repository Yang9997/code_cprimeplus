#include<stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d, oct = %o, hex = %x\n",x,x,x);
    printf("dec = %#d, oct = %#o, hex = %#x",x,x,x);

    return 0;
}