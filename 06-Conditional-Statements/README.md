# Conditional Statements in C 🤔

## What are Conditional Statements?

Conditional statements allow a program to make decisions based on conditions.

Example:

```c
if (age >= 18) {
    printf("You can vote.");
}
```

---

# if Statement

Executes code only when the condition is true.

Syntax:

```c
if (condition) {
    // code
}
```

Example:

```c
int age = 20;

if (age >= 18) {
    printf("You can vote.");
}
```

---

# if-else Statement

Executes one block if the condition is true and another if it is false.

Syntax:

```c
if (condition) {
    // code if true
} else {
    // code if false
}
```

Example:

```c
int age = 16;

if (age >= 18) {
    printf("You can vote.");
} else {
    printf("You cannot vote.");
}
```

---

# else-if Ladder

Used when there are multiple conditions.

Example:

```c
int marks = 85;

if (marks >= 90) {
    printf("Grade A");
} else if (marks >= 75) {
    printf("Grade B");
} else if (marks >= 50) {
    printf("Grade C");
} else {
    printf("Fail");
}
```

---

# Nested if

An if statement inside another if statement.

Example:

```c
int age = 20;
int hasID = 1;

if (age >= 18) {
    if (hasID) {
        printf("Entry allowed");
    }
}
```

---

# Example Program

```c
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote.");
    } else {
        printf("You cannot vote.");
    }

    return 0;
}
```

---

# Sample Output

```
Enter your age: 20
You can vote.
```

---

# Practice Questions

1. Check if a number is positive or negative.
2. Check if a number is even or odd.
3. Find the greater of two numbers.
4. Check if a student passed or failed.
5. Create a grade calculator using marks.

---

# Mini Project

Voting Eligibility Checker

Input:

```text
Enter your age: 17
```

Output:

```text
You cannot vote.
```

---

# Key Takeaways

- `if` executes code when a condition is true.
- `if-else` handles true and false cases.
- `else-if` helps check multiple conditions.
- Conditional statements are used in almost every program.

---

# Next Topic

➡️ Loops in C

Learn:
- for loop
- while loop
- do-while loop

Happy Coding! 🚀