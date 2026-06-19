#include <stdio.h>

int main() {

    int choice;
    float value, result;

    do {

        printf("\n===== UNIT CONVERTER =====\n");
        printf("1. Kilometers to Meters\n");
        printf("2. Meters to Centimeters\n");
        printf("3. Celsius to Fahrenheit\n");
        printf("4. Kilograms to Grams\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Kilometers: ");
                scanf("%f", &value);

                result = value * 1000;
                printf("%.2f KM = %.2f Meters\n", value, result);
                break;

            case 2:
                printf("Enter Meters: ");
                scanf("%f", &value);

                result = value * 100;
                printf("%.2f Meters = %.2f Centimeters\n", value, result);
                break;

            case 3:
                printf("Enter Celsius: ");
                scanf("%f", &value);

                result = (value * 9 / 5) + 32;
                printf("%.2f°C = %.2f°F\n", value, result);
                break;

            case 4:
                printf("Enter Kilograms: ");
                scanf("%f", &value);

                result = value * 1000;
                printf("%.2f KG = %.2f Grams\n", value, result);
                break;

            case 5:
                printf("Thank you for using Unit Converter!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}