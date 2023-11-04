#include <stdio.h>

void LogIn(){
    int i, found = 0;
    char name[20];
    char password[20];
    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; i < 4; i++){
        if (strcmp(name, names[i]) == 0){
            found = 1;
            break;
        }
    }
    if (found){
        printf("Enter your password: ");
        scanf("%s", password);
        if (strcmp(password, passwords[i]) == 0) {
            int choice;
            printf("Welcome to the bank!\n");
            while (1) {
                printf("What do you want to do?\n");
                printf("1. Deposit\n");
                printf("2. Withdraw\n");
                printf("3. Quit\n");
                printf("4. Invest\n");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        deposit();
                        break;
                    case 2:
                        withdraw();
                        break;
                    case 3:
                        
                    case 4:
                        printf("Goodbye!\n");
                        return;
                    default:
                        printf("Invalid choice\n");
                }
            }
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Account does not exist\n");
    }
}
int main(){
    Bank();
    return 0;
}
