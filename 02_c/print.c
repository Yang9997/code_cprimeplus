#include<stdio.h>
void one_three(void);
int main(){
    printf("Start now:\n");
    one_three();
    printf("done!");

    return 0;
}

void one_three(void){
    printf("one\n");
    printf("two\n");
    printf("three\n");
}