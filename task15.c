#include <stdio.h>

// 1. no-return and no-parameter
void simple(){
    printf("No return and No parameter\n");
}

// 2. no-return and parameter
void add(int a, int b){
    printf("no return and parameter : %d \n", a+b);
}
// 3. return and no-parameter
int simple2(){
    printf("Return and no parameter \n");
    return 90;
}

// 4. return and parameter
double multiply(double a, double b){
    printf("Return and Paremeter \n");
    return a*b;
}

void main()
{
    simple();
    add(7, 10);
    printf("%d \n", simple2());
    printf("%0.2lf \n", multiply(9.52, 8));
}