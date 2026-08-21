#include <stdio.h>
#include <string.h>

typedef struct Account
{
    char name[100];
    double balance;
    int age;
    char accountNumber[16];
    char password[10];
    char address[100];
} Account;

void detailShow(Account *a){
        printf("Account : \n");
        printf("\tName : %s", a->name);
        printf("\tAge : %d \n", a->age);
        printf("\tAccount Number : %s \n", a->accountNumber);
        printf("\tAddress : %s \n", a->address);
        printf("\tBalance : %0.2lf \n", a->balance);
        printf("==========================================\n");
}

void menu(){
    printf("\n====================[ Welcome ]====================\n");
    printf("1. Deposit \n");
    printf("2. WithDrawl \n");
    printf("3. Check Balance \n");
    printf("4. Transfer Other Account \n");
    printf("5. Change Password \n");
    printf("6. Exit... \n");
    printf("\n=========================================\n");
}

void display(Account *a)
{
    char accno[16], pwd[10];
    printf("Enter your account number : ");
    scanf("%s", &accno);
    printf("Enter your password : ");
    scanf("%s", &pwd);
    if ((strcmp(accno, a->accountNumber) == 0) && (strcmp(pwd, a->password) == 0))
    {
        int f = 1;
        while(f){
        menu();
        int choice;
        scanf("%d", &choice);
        switch(choice){
            case 1 : deposit(a);
            break;
            case 2 : printf("Withdrawl \n");
            break;
            case 3 : detailShow(a);
            break;
            case 4 : printf("transfer other account \n");
            break;
            case 5 : printf("change password \n");
            break;
            case 6 : printf("exit..\n");
            f = 0;
            break;
            default : printf("Invalid choice ");
            }
        }   
    }
    else
    {
        printf("Invalid account number or password !! \n");
    }
}

void deposit(Account *a){
  
        double amount;
        printf("Enter the amount : ");
        scanf("%lf", &amount);
        a->balance += amount;
        printf("=========================[Successfully Deposit %0.2lf ]==============\n", amount);
        printf("Account : \n");
        printf("\tName : %s", a->name);
        printf("\tAge : %d \n", a->age);
        printf("\tAccount Number : %s \n", a->accountNumber);
        printf("\tAddress : %s \n", a->address);
        printf("\tBalance : %0.2lf \n", a->balance);
        printf("==========================================\n");
}

void main()
{
    Account a = {"ritik", 1000.00, 20, "BOI8976", "1234", "Vijay Nagar"};
    display(&a);

}