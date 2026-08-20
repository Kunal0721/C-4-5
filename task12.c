#include<stdio.h>

// 1. check the student is passed or not
void checkPassOrNot(char name[], int n){
    if(n >= 33 ){
        printf("%s is passed  %d marks \n", name, n);
    }
    else{
        printf("%s is failed %d marks\n",name, n );
    }
}

// 2. check the number is even or odd.
void checkEvenOrOdd(int n){
    if(n  % 2 == 0 ) printf("number is even : %d \n", n);
    else printf("number is odd : %d \n", n);
}

// 3. power function
// base = 3, e = 3
void power(int base, int e){
    int ans = 1;
    for(int i=1; i<=e; i++){
        ans *= base;
    }
    printf("%d power of %d  :  %d \n", base, e, ans);
}

// 4. check the number is prime or not
void checkPrimeNumber(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count ++;
        }
    }
    if(count == 2) printf("prime number : %d \n", n);
}

// 5. print only the prime number 1 to n. 
void primeRange(int n){
    for(int i=1; i<=n; i++){
        checkPrimeNumber(i);
    }
}

void main(){
    primeRange(100);
}