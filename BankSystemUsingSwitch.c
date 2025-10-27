#include<stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    // Read choice only once
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Current Balance: %.2f", balance);
            break;

        case 2:
            scanf("%f", &amount);
            if(amount > 0) {
                balance += amount;
                printf("Deposited successfully! Your new balance is: %d", (int)balance);
            } else {
                printf("Invalid amount!");
            }
            break;

        case 3:
            scanf("%f", &amount);
            if(amount > 0) {
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn successfully. New Balance: %.d", (int)balance);
                } else {
                    printf("Insufficient balance! Your current balance is: %.d", (int)balance);
                }
            } else {
                printf("Invalid amount!");
            }
            break;

        case 4:
            printf("Thank you for using our service!");
            break;

        default:
            printf("Invalid choice! Please select a valid option.");
            break;
    }

    return 0;
}