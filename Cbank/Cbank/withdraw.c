#include <stdio.h>
int balance;
balance = balance;
int withdrawn-money;

void withdraw() {
    int input;
    printf("How much do you want to withdraw: ");
    scanf("%d", &input);
    if (input > balance) {
        printf("Insufficient funds\n");
    } else {
        int withdrawn-money = balance -= input;
        printf("Ok, you have %d left\n", balance);
    }
}
int main(){
    Bank();
    return 0;
}