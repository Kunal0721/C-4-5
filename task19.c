#include<stdio.h>

void simple(int a ){
    a = a  * 10;
    printf("%d \n", a);
}

void simple2(int *a){
    (*a) = (*a)  * 10;
    printf("%d \n", (*a));
}

void main(){
    int a = 19;
    printf("%d \n", a);  // 19
    simple2(&a);              // 190 
    printf("%d \n", a);     // 19
}