# Input and Output in C ⌨️

## What is Input and Output?

Input and Output allow a program to communicate with the user.

- Input → Data entered by the user.
- Output → Data displayed by the program.

---

# Output using printf()

The `printf()` function is used to display output on the screen.

Example:

```c
printf("Hello World");
```

Output:

```
Hello World
```

---

# Input using scanf()

The `scanf()` function is used to take input from the user.

Example:

```c
int age;

scanf("%d", &age);
```

---

# Why is '&' Used?

The `&` operator gives the memory address of a variable.

Example:

```c
scanf("%d", &age);
```

Without `&`, scanf() cannot store the user's input correctly.

---

# Example Program

```c
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}
```

---

# Sample Output

```
Enter your age: 18
Your age is 18
```

---

# Taking Multiple Inputs

Example:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);

    return 0;
}
```

---

# Input for Different Data Types

## Integer

```c
int age;
scanf("%d", &age);
```

## Float

```c
float height;
scanf("%f", &height);
```

## Character

```c
char grade;
scanf(" %c", &grade);
```

Note:
A space before `%c` is often used to ignore leftover newline characters.

---

# Format Specifiers

| Data Type | Format Specifier |
|------------|------------|
| int | %d |
| float | %f |
| char | %c |
| double | %lf |

---

# Practice Questions

1. Take age as input and print it.
2. Take two numbers and print their sum.
3. Take a float number and print it.
4. Take a character and print it.
5. Take two numbers and print their product.

---

# Mini Challenge

Create a program that asks the user:

```text
Enter your name:
Enter your age:
```

Then prints:

```text
Hello Tanmay
You are 18 years old.
```

---

# Key Takeaways

- `printf()` displays output.
- `scanf()` takes input.
- `&` is used with scanf().
- Different data types use different format specifiers.

---

# Next Topic

➡️ Conditional Statements (if, if-else, else-if)

Learn:
- Making decisions
- Comparing values
- Building real-world logic

Happy Coding! 🚀