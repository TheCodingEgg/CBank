#include <stdio.h>
#include <string.h>

char names[4][20];
char passwords[4][20];
int balance;






void Bank(){
    char input21[50];

    printf("Welcome to the bank!\n");
    account();
    printf("What would you like to do?\n");
    printf("1: Log In\n");
    printf("2: Quit\n");
    scanf("%s", input21);
    if (strcmp(input21, "1") == 0){
        LogIn();
    }
    else{
        printf("Goodbye!\n");
    }
}

int main() {
    Bank();
    return 0;
}