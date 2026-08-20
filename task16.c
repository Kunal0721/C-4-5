#include<stdio.h>

void printArray(int ar[], int n){
    for(int i=0; i<n; i++) printf("%d ", ar[i]);
    printf("\n");
}

void reverse(int ar[], int start, int end){
    if(start >= end) return ; 
    int temp = ar[start];
    ar[start] = ar[end];
    ar[end] = temp;
    reverse(ar,start+1, end-1);
}

void main(){
    int ar[] = {1, 2, 3, 4, 5};
    int n = sizeof(ar) / sizeof(ar[0]);
    printArray(ar, n);
    reverse(ar, 0, n-1);
    printArray(ar,n);
}