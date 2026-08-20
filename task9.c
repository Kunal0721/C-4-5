#include<stdio.h>
#include<string.h>

void main( ){

    char str[] = "malayalam";
    int n = strlen(str);  // n = 5
    char temp[100] = "";

    strcpy(temp, str);  // temp = "naman"
    strrev(str);       // str = "naman"
    printf("%s , %s \n"  ,str , temp);   

    int i = strcmp(temp, str);    // naman, naman
    if(i == 0) printf("Palindrome");
    else printf("Not palindrome");

}