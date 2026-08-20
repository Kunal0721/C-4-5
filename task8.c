#include<stdio.h>

void printArray(int ar[]){
for(int i=0; i<5; i++) printf("%d ", ar[i]);
printf("\n");
}

void main(){
    //          i   j                                 i     j  
    int ar[] = {11, 3, 9, 120, 19}; // => {3, 9,  11, 19, 120}

    printArray(ar);

    printf("\n===========================\n\n");
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(ar[i] < ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    
    printArray(ar);

}