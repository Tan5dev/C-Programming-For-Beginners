# Loops in C 🔁

## What are Loops?

Loops are used to execute a block of code repeatedly until a condition becomes false.

Without loops:

```c
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
printf("Hello\n");
```

With loops:

```c
for(int i = 1; i <= 5; i++) {
    printf("Hello\n");
}
```

Much easier! 🚀

---

# for Loop

Used when the number of repetitions is known.

Syntax:

```c
for(initialization; condition; update) {
    // code
}
```

Example:

```c
for(int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
```

Output:

```text
1
2
3
4
5
```

---

# while Loop

Used when the number of repetitions is not known beforehand.

Syntax:

```c
while(condition) {
    // code
}
```

Example:

```c
int i = 1;

while(i <= 5) {
    printf("%d\n", i);
    i++;
}
```

---

# do-while Loop

Executes at least once before checking the condition.

Syntax:

```c
do {
    // code
} while(condition);
```

Example:

```c
int i = 1;

do {
    printf("%d\n", i);
    i++;
} while(i <= 5);
```

---

# Loop Control Statements

## break

Stops the loop immediately.

Example:

```c
for(int i = 1; i <= 10; i++) {
    if(i == 5)
        break;

    printf("%d\n", i);
}
```

Output:

```text
1
2
3
4
```

---

## continue

Skips the current iteration.

Example:

```c
for(int i = 1; i <= 5; i++) {
    if(i == 3)
        continue;

    printf("%d\n", i);
}
```

Output:

```text
1
2
4
5
```

---

# Example Program

```c
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

---

# Practice Questions

1. Print numbers from 1 to 10.
2. Print numbers from 10 to 1.
3. Print even numbers from 1 to 20.
4. Find the sum of first 10 numbers.
5. Print the multiplication table of a number.

---

# Mini Project

Multiplication Table Generator

Input:

```text
Enter a number: 5
```

Output:

```text
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```

---

# Key Takeaways

- Loops repeat code automatically.
- `for` loop is used when repetitions are known.
- `while` loop is used when repetitions depend on a condition.
- `do-while` executes at least once.
- `break` exits a loop.
- `continue` skips an iteration.

---

# Next Topic

➡️ Functions in C

Learn:
- Creating functions
- Calling functions
- Function parameters
- Return values

Happy Coding! 🚀