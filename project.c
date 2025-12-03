#include <stdio.h>

int main() {
    int pin = 1234;          // Correct PIN (you can change this)
    int enteredPin;
    int attempts = 0;
    int choice;
    float balance = 1000.0;  // Initial balance
    float amount;

    printf("=====================================\n");
    printf("        WELCOME TO C BANK ATM        \n");
    printf("=====================================\n");

    // PIN Verification (max 3 attempts)
    while (attempts < 3) {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("PIN accepted. Login successful!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("\nToo many incorrect attempts. Your card has been blocked.\n");
        return 0;  // End program
    }

    // Main menu loop
    do {
        printf("\n=====================================\n");
        printf("               MENU                  \n");
        printf("=====================================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: ₹%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount. Deposit failed.\n");
                } else {
                    balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                    printf("Updated balance: ₹%.2f\n", balance);
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount. Withdrawal failed.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance. Withdrawal failed.\n");
                } else {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                    printf("Updated balance: ₹%.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using C Bank ATM. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
