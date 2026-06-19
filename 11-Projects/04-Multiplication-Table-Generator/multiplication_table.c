#include <stdio.h>

int main() {

    int number;

    printf("=== Multiplication Table Generator ===\n\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d\n\n", number);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}