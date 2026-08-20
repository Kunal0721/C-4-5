#include<stdio.h>
#include<math.h>

#ifndef M_PI
#define M_PI 3.14159
#endif

void main(){
    printf("power : %lf ", pow(3, 5));
    printf("\n=======================\n");
    printf("square root : %0.2lf ", sqrt(15));
    printf("\n=========================\n");
    printf("cube root : %0.2lf ", cbrt(9));
    printf("\n=========================\n");
    printf("floating absolute value : %lf ", fabs(-11.8));
    printf("\n=========================\n");
    printf("round up : %0.0lf ", ceil(8.2));
printf("\n=========================\n");
    printf("round down : %0.0lf ", floor(8.8));
printf("\n=========================\n");
    printf("round :  %0.0lf ", round(11.5));
    printf("\n=========================\n");
    printf("round :  %0.2lf ", fmod(8.9, 3));
    printf("\n===========================\n\n");

    int radian = 270;
    double degree = radian * M_PI / 180;
    printf("%0.2lf ", sin(degree));

    printf("%0.2lf ", asin(degree));
    

}