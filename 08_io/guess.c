#include<stdio.h>
int main(){
    int guess = 1;
    printf("Pick an integer from 1 t 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");  
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
    while(getchar()!='y'){
        printf("Well, then, is it %d ?\n",++guess)
    }
}