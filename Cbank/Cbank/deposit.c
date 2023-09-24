#include <stdio.h>

void deposit() {
    int input;
    printf("How much do you want to deposit: ");
    if (scanf("%d", &input) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }
    if (input < 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return;
    }
    balance += input;
    printf("Ok, you have %d left\n", balance);
}

int main(){
    Bank();
    return 0;
}