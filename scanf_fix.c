#include <stdio.h>
#include <string.h>

/*
 * COMMON ISSUES WITH scanf() AND HOW TO FIX THEM:
 * 
 * Issue 1: Newline '\n' Left in Input Buffer
 * -------------------------------------------
 * When you enter a number using scanf("%d", &age) and press Enter, the number
 * is saved in 'age', but the newline character '\n' remains in the input buffer (stdin).
 * If the next scanf is scanf("%c", &ch) or scanf("%[^\n]", str), it reads the leftover '\n'
 * immediately and appears to skip user input!
 * 
 * FIX: Add a leading space inside the format string, e.g., scanf(" %c", &ch) or scanf(" %[^\n]", str).
 * The leading space tells scanf to skip all leading whitespace characters (spaces, tabs, newlines).
 * 
 * 
 * Issue 2: Reading Strings with Spaces
 * -------------------------------------
 * scanf("%s", name) stops reading at the first space! So entering "John Doe" only stores "John".
 * 
 * FIX: Use scanf(" %[^\n]", name) which reads the full line until a newline character is encountered.
 * 
 * 
 * Issue 3: Missing Address-of Operator (&)
 * -----------------------------------------
 * Writing scanf("%d", num) instead of scanf("%d", &num) causes a Segmentation Fault or crash
 * because scanf expects a memory pointer. (Note: Arrays like char name[100] do not need '&').
 * 
 * FIX: Always pass '&' for int, float, double, char variables (e.g., &num, &age, &grade).
 * 
 * 
 * Issue 4: Double vs Float Format Specifiers
 * -------------------------------------------
 * In printf(), %f works for both float and double. But in scanf(), %f is for float* and %lf is for double*.
 * 
 * FIX: Always use %lf in scanf for double variables!
 * 
 * 
 * Issue 5: VS Code Output Window (Code Runner)
 * ---------------------------------------------
 * By default, Code Runner opens output in a READ-ONLY window where you cannot type input for scanf.
 * 
 * FIX: Go to VS Code Settings -> Search "Run In Terminal" -> Check "Code-runner: Run In Terminal".
 */

typedef struct Student {
    char name[100];
    int age;
    int rollno;
    double marks;
    char grade;
} Student;

void inputStudent(Student *s) {
    printf("\n--- Enter Student Details ---\n");
    
    // 1. String with spaces -> use " %[^\n]"
    printf("Enter Student Full Name: ");
    scanf(" %[^\n]", s->name);

    // 2. Integer input -> pass address &s->age
    printf("Enter Age: ");
    scanf("%d", &s->age);

    // 3. Integer input -> pass address &s->rollno
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollno);

    // 4. Double input -> use %lf and pass address &s->marks
    printf("Enter Marks: ");
    scanf("%lf", &s->marks);

    // 5. Character input -> Notice the LEADING SPACE " %c" to skip leftover '\n'
    printf("Enter Grade (A/B/C/D): ");
    scanf(" %c", &s->grade);
}

void displayStudent(Student s) {
    printf("\n=============================================\n");
    printf(" Name     : %s\n", s.name);
    printf(" Age      : %d\n", s.age);
    printf(" Roll No  : %d\n", s.rollno);
    printf(" Marks    : %.2lf\n", s.marks);
    printf(" Grade    : %c\n", s.grade);
    printf("=============================================\n");
}

int main() {
    Student student1;
    
    // Read student details using fixed scanf calls
    inputStudent(&student1);

    // Display student details
    displayStudent(student1);

    return 0;
}
