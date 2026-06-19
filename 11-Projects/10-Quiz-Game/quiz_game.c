#include <stdio.h>

int main() {

    int answer;
    int score = 0;

    printf("====================================\n");
    printf("         QUIZ GAME V3\n");
    printf("====================================\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Pune\n");
    printf("4. Chennai\n");

    printf("Your Answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        score++;
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. C\n");
    printf("2. HTML\n");
    printf("3. CSS\n");
    printf("4. Photoshop\n");

    printf("Your Answer: ");
    scanf("%d", &answer);

    if(answer == 1) {
        score++;
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    // Question 3
    printf("\nQ3. How many days are there in a week?\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 7\n");
    printf("4. 8\n");

    printf("Your Answer: ");
    scanf("%d", &answer);

    if(answer == 3) {
        score++;
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    // Question 4
    printf("\nQ4. What does CPU stand for?\n");
    printf("1. Central Processing Unit\n");
    printf("2. Computer Personal Unit\n");
    printf("3. Central Program Utility\n");
    printf("4. Control Process Unit\n");

    printf("Your Answer: ");
    scanf("%d", &answer);

    if(answer == 1) {
        score++;
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    // Question 5
    printf("\nQ5. Who created C language?\n");
    printf("1. Bill Gates\n");
    printf("2. Dennis Ritchie\n");
    printf("3. Steve Jobs\n");
    printf("4. Elon Musk\n");

    printf("Your Answer: ");
    scanf("%d", &answer);

    if(answer == 2) {
        score++;
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    printf("\n====================================\n");
    printf("           FINAL RESULT\n");
    printf("====================================\n");

    printf("Score: %d / 5\n", score);

    if(score == 5) {
        printf("🏆 Excellent!\n");
    }
    else if(score >= 3) {
        printf("👍 Good Job!\n");
    }
    else {
        printf("📚 Keep Practicing!\n");
    }

    return 0;
}