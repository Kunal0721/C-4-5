#include<stdio.h>

void main(){
    int a = 19;
    int *pa = &a;

    printf("%d \n",a);
    printf("%p \n",&a);
    printf("%p \n", pa);
    printf("%p \n", &pa);
    printf("%d \n", *pa);

    *pa = 93;
    printf("%d \n",a);
}