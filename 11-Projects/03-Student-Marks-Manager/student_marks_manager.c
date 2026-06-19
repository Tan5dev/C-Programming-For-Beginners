#include <stdio.h>

int main() {

    int marks[5];
    int total = 0;
    int highest, lowest;
    float average;

    printf("=== Student Marks Manager ===\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    highest = marks[0];
    lowest = marks[0];

    for(int i = 1; i < 5; i++) {

        if(marks[i] > highest) {
            highest = marks[i];
        }

        if(marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    average = total / 5.0;

    printf("\n===== RESULT =====\n");
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Highest Marks = %d\n", highest);
    printf("Lowest Marks = %d\n", lowest);

    return 0;
}