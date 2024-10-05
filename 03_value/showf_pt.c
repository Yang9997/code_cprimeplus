#include<stdio.h>
int main(void)
{
    float about = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",about,about);
    printf("And it is %a in hexadecimal, powers of 2 notation\n",about);
    printf("%f can be written %e\n",abet,abet);
    // 这里输出不对，大概是不是c99或者c11的缘故
    printf("%Lf can be written %Le\n",dip,dip);

    return 0;
}