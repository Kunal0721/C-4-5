#include<stdio.h>

typedef struct Student{
    int id;
    char name[100];
    int age;
    double marks[3];
    double total;
    double percentage;
}Student;

void display(Student s){
    printf("Id : %d |  Name : %s |  Age : %d |  Marks : [%0.2lf, %0.2lf, %0.2lf]\t|  Total : %0.2lf\t| Percentage : %0.2lf \t|\n", s.id, s.name, s.age, s.marks[0], s.marks[1], s.marks[2], s.total, s.percentage);
}

void inputStudent(Student *s){
    printf("Enter id : ");
    scanf("%d", &s->id);
    printf("Enter name : ");
    scanf("%s", &s->name);
    printf("Enter age : ");
    scanf("%d", &s->age);
    printf("Enter Hindi Marks : ");
    scanf("%lf", &s->marks[0]);
    printf("Enter English Marks : ");
    scanf("%lf", &s->marks[1]);
    printf("Enter Maths Marks : ");
    scanf("%lf", &s->marks[2]);

    double total = s->marks[0] + s->marks[1] +s->marks[2];
    s->total = total;
    double percentage = total / 3;
    s->percentage = percentage;

    printf("============================================================\n\n");
}

void menu(){
    printf("1. For Add Student \n");
    printf("2. For Remove Student \n");
    printf("3. Search \n");
    printf("4. Student Sort By Marks \n");
    printf("5. Display All Students \n");
    printf("6. exit..\n");
    printf("=============================================\n\n");
}

void banner(){
    printf("==================================================\n");
    printf("\t\t Student Management System \n");
    printf("===================================================\n\n");
}

void displayAllStudents(Student s[], int studentCount){
    for(int i=0; i<studentCount; i++){
        display(s[i]);
    }
    printf("\n\n");
}

void sortByPercentage(Student s[] , int studentCount){
    for(int i=0; i<studentCount; i++){
        for(int j=i+1; j<studentCount; j++){
            if(s[i].percentage  < s[j].percentage){
                Student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    displayAllStudents(s , studentCount);
}

void searchStudent(Student s[], int studentCount){
    int id;
    printf("Enter id : ");
    scanf("%d", &id);
    for(int i=0; i<studentCount; i++){
        if(id == s[i].id){
            display(s[i]);
            return ;
        }
    }
    printf("Invalid Id \n");
}

void removeStudent(Student s[], int *studentCount){
    int id;
    printf("Enter student id : ");
    scanf("%d", &id);
    for(int i=0; i<*studentCount; i++){
        if(id == s[i].id){
            for(int j=i; j<*studentCount - 1; j++){
                s[j] = s[j+1];
            }
            printf("\tStudent is remove \n");
            printf("==========================================\n\n");
            (*studentCount)--;
            return ;
        }
    }
}

void main(){
    Student s[100];
    Student s1 = {101, "Shivani", 19, {100, 100, 100}, 300, 100};
    Student s2 = {102, "Ritika", 19, {100, 100, 100}, 300, 100};
    Student s3 = {103, "Shivani", 19, {100, 100, 100}, 300, 100};
    Student s4 = {104, "Yashika", 19, {100, 100, 100}, 300, 100};
    Student s5 = {105, "Roshini", 19, {100, 100, 100}, 300, 100};

    s[0] = s1;
    s[1] = s2;
    s[2] = s3;
    s[3] = s4;
    s[4] = s5;

    int studentCount = 5;
    int f = 1;
    while(f){
        banner();
        menu();
        int choice;
        scanf("%d", &choice);
        switch(choice){
            case 1 : {
                inputStudent(&s[studentCount]);
                studentCount++;
                printf("Student is added \n\n");
            }
            break;
            case 2 : removeStudent(s, &studentCount);
            break;
            case 3 : searchStudent(s, studentCount);
            break;
            case 4 : sortByPercentage(s, studentCount);
            break;
            case 5 : displayAllStudents(s, studentCount);
            break;
            case 6 : {
                printf("Exit...");
                f = 0;
            }
                break;
            default : printf("Invalid choice \n\n");
        }
    }
}