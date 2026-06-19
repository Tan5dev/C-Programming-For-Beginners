#include <stdio.h>
#include <string.h>

int main() {

    char names[100][50];
    char phones[100][15];

    int totalContacts = 0;
    int choice;

    do {

        printf("\n====================================\n");
        printf("         CONTACT BOOK V3\n");
        printf("====================================\n");

        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        getchar();

        switch(choice) {

            case 1:

                printf("Enter Name: ");
                fgets(names[totalContacts], 50, stdin);

                names[totalContacts][strcspn(names[totalContacts], "\n")] = '\0';

                printf("Enter Phone Number: ");
                fgets(phones[totalContacts], 15, stdin);

                phones[totalContacts][strcspn(phones[totalContacts], "\n")] = '\0';

                totalContacts++;

                printf("✅ Contact Added Successfully!\n");

                break;

            case 2:

                if(totalContacts == 0) {
                    printf("No Contacts Found!\n");
                }
                else {

                    printf("\n===== CONTACT LIST =====\n");

                    for(int i = 0; i < totalContacts; i++) {
                        printf("%d. %s - %s\n",
                               i + 1,
                               names[i],
                               phones[i]);
                    }
                }

                break;

            case 3:

                printf("Thank you for using Contact Book!\n");
                break;

            default:

                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}