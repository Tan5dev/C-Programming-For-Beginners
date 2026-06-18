# Functions in C ⚙️

## What are Functions?

A function is a block of code that performs a specific task.

Instead of writing the same code multiple times, you can create a function and call it whenever needed.

---

# Why Use Functions?

Functions help us:

- Reduce code duplication
- Improve code readability
- Make programs easier to maintain
- Reuse code multiple times

---

# Syntax

```c
return_type function_name() {
    // code
}
```

Example:

```c
void greet() {
    printf("Hello!");
}
```

---

# Calling a Function

Creating a function is not enough.

You must call it.

Example:

```c
greet();
```

Full Program:

```c
#include <stdio.h>

void greet() {
    printf("Hello!\n");
}

int main() {
    greet();

    return 0;
}
```

---

# Function with Parameters

Parameters allow functions to receive data.

Example:

```c
#include <stdio.h>

void greet(char name[]) {
    printf("Hello %s", name);
}

int main() {
    greet("Tanmay");

    return 0;
}
```

Output:

```text
Hello Tanmay
```

---

# Function with Return Value

Functions can return data.

Example:

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);

    printf("%d", result);

    return 0;
}
```

Output:

```text
8
```

---

# Types of Functions

## 1. No Parameters, No Return Value

```c
void greet() {
    printf("Hello");
}
```

---

## 2. Parameters, No Return Value

```c
void greet(char name[]) {
    printf("Hello %s", name);
}
```

---

## 3. Parameters and Return Value

```c
int add(int a, int b) {
    return a + b;
}
```

---

# Example Program

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);

    printf("Sum = %d", result);

    return 0;
}
```

Output:

```text
Sum = 30
```

---

# Practice Questions

1. Create a function that prints your name.
2. Create a function to add two numbers.
3. Create a function to find the square of a number.
4. Create a function to check if a number is even or odd.
5. Create a function to calculate the area of a rectangle.

---

# Mini Project

Simple Calculator Using Functions

Functions:

- add()
- subtract()
- multiply()
- divide()

Example:

```text
Enter two numbers: 10 5

Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
```

---

# Key Takeaways

- Functions help organize code.
- Functions can accept parameters.
- Functions can return values.
- Functions make programs reusable and easier to maintain.

---

# Next Topic

➡️ Arrays in C

Learn:
- Storing multiple values
- Accessing array elements
- Looping through arrays

Happy Coding! 🚀