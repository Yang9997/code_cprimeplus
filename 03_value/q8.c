#include<stdio.h>
int main(void)
{
    float cup;
    printf("How many cup do you want to get:");
    scanf("%f",&cup);

    float pinto = cup/2;
    float ance = cup*8;
    float big_spo = ance*2;
    float tea_spo = big_spo*3;
    printf("pinto:%f\nance:%f\nbig_spo:%f\ntea_spo:%f",pinto,ance,big_spo,tea_spo);

    return 0;
}