#include <stdio.h>

typedef struct Student {
    char name[100];
    int age;
    int rollno;
} Student;

void inputStudent(Student *s) {
    printf("Enter name: ");
    scanf(" %[^\n]", s->name); // Leading space avoids newline bug, %[^\n] reads full name with spaces

    printf("Enter age: ");
    scanf("%d", &s->age);      // Address operator & required

    printf("Enter roll number: ");
    scanf("%d", &s->rollno);   // Address operator & required
}

void display(Student s) {
    printf("Name : %s\t| Age : %d\t| Rollno : %d\n", s.name, s.age, s.rollno);
}

int main() {
    Student s;
    printf("=== Dynamic Input using scanf ===\n");
    inputStudent(&s);
    printf("\n--- Student Information ---\n");
    display(s);
    return 0;
}
