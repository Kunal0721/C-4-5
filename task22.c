#include<stdio.h>

typedef struct Student{
    char name[100];
    int age;
    int rollno;
}Student;

void display(Student s){
    printf("Name : %s\t| Age : %d\t| Rollno : %d\n", s.name, s.age, s.rollno);
}

void main(){
   Student s = {"isihika", 19, 109};
   Student s2 = {"Ritika", 19, 108};
   Student s3 = {"rohan", 19, 111};
   Student s4 = {"shivani", 19, 112};
   display(s);
   display(s2);
   display(s3);
   display(s4);
}