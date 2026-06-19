#include <stdio.h>

int main() {

    float principal, rate, time, simpleInterest;

    printf("=== Simple Interest Calculator ===\n\n");

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (Years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f\n", simpleInterest);

    return 0;
}