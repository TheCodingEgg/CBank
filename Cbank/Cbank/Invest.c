#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

char string[300];
int allowance = 1000;
int string53;

int main() {
    while (1) {
        printf("Do you want to invest? ");
        scanf("%s", string);

        if (strcmp(string, "yes") == 0) {

            printf("How much money do you want to invest? ");
            scanf("%d", &string53);

            srand(time(NULL));

            int randum = rand() % 100 - 1;
            int randum2 = rand() % 2;

            if (randum2 == 0) {
                int randnum = randum / 2;
                int changed2 = string53 - allowance;
                printf("You Lost Money\n");
                printf("You lost %d\n", string53);
                printf("Your allowance is %d\n", changed2);
                allowance = changed2; // Fixed the assignment of allowance
            }
            if (randum2 == 1) {
                int randnum = randum * 2;
                int changed = string53 + allowance;
                printf("You Earned Money\n");
                printf("You earned %d\n", string53);
                printf("Your Allowance is now %d\n", changed);
                allowance = changed; // Fixed the assignment of allowance
            }
        }
    }
    return 0;
}
