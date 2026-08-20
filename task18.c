#include<stdio.h>

void simple(int *a){
    ++(*a);
}

void main(){
  int a = 10;
  printf("%d ",a);
  simple(&a);
  printf("%d ",a);

}