#include <stdio.h>

int main() {
    int age = 18;
    float height = 5.8;
    char grade = 'A';
    double salary = 25000.50;

    printf("Age = %d\n", age);
    printf("Height = %.1f\n", height);
    printf("Grade = %c\n", grade);
    printf("Salary = %.2lf\n", salary);

    return 0;
}