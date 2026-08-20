#include<stdio.h>

double simple(){
    return 98.8;
}

double power(double base, double e){
    int ans = 1;
    for(int i=1; i<=e; i++){
        ans *= base;
    }
    return ans;
}

void main(  ){
 
    printf("%0.2lf ", power(11, 2));
}