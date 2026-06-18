#include <stdio.h>

int main() {

    int secretNumber = 7;
    int guess;

    printf("=== Number Guessing Game ===\n");

    do {
        printf("Guess a number between 1 and 10: ");
        scanf("%d", &guess);

        if(guess > secretNumber) {
            printf("Too High!\n");
        }
        else if(guess < secretNumber) {
            printf("Too Low!\n");
        }
        else {
            printf("🎉 Congratulations! You guessed correctly.\n");
        }

    } while(guess != secretNumber);

    return 0;
}