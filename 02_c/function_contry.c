#include<stdio.h>
void br(void);
void ic(void);
int main(void){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();

    return 0;
}

void br(void){
    printf("Brazil, Russion");
}

void ic(void){
    printf("Indi, China");
}