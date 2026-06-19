#include <stdio.h>

int main() {

    int choice;
    float balance = 10000.0;
    float deposit, withdraw;

    do {

        printf("\n===== ATM SIMULATOR =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nCurrent Balance = ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ₹");
                scanf("%f", &deposit);

                balance += deposit;

                printf("Deposit Successful!\n");
                printf("New Balance = ₹%.2f\n", balance);
                break;

            case 3:
                printf("Enter Withdrawal Amount: ₹");
                scanf("%f", &withdraw);

                if(withdraw <= balance) {

                    balance -= withdraw;

                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance = ₹%.2f\n", balance);

                } else {

                    printf("Insufficient Balance!\n");
                }

                break;

            case 4:
                printf("Thank you for using ATM Simulator!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}