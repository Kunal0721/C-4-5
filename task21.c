#include<stdio.h>

struct Address{
    char city[100];
    char state[100];
    int pincode;
    char country[100];
};

struct Student{
    char name[100];
    int age;
    int rollno;
    struct Address address;
};

void main(){
    struct Student s = {"ritika", 19, 109, {"indore", "mp", 452001, "india"}};
    printf("%s ", s.address.country);
    int a = 90;
    //struct Student s = {};
}