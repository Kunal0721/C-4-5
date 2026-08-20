#include<stdio.h>
#include<string.h>

void main(){
   char name[100] = "Naman";
   strlwr(name);
    char temp[100];
    
    strcpy(temp, name);
    printf("name : %s, temp : %s \n", name, temp);
    strrev(name);
    printf("name : %s, temp : %s", name, temp);
    int i = strcmp(temp, name);
    if(i == 0){
        printf("\npalindrome %s", temp);
    }
    else{
        printf("\n not palindrome %s", temp);    
    }
}