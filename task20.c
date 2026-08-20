
#include <stdio.h>

struct Student{
    char name[100];
    int age;
    int rollno;
};

void displayStudent(struct Student s){
  printf("===============[ Name :  %s ]================\n", s.name);
    printf("\tAge : %d \n", s.age);
    printf("\tRollno : %d \n", s.rollno);
    printf("=============================================\n");
}

int main()
{
    struct Student s = {"umang", 19, 101};
    struct Student s2 = {"ritika", 18, 102};

    displayStudent(s);
    displayStudent(s2);
   return 0;
}