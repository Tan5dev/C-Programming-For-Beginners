# Operators in C ⚡

## What are Operators?

Operators are symbols used to perform operations on variables and values.

Example:

```c
int sum = 5 + 3;
```

Here, `+` is an operator.

---

# Types of Operators

## 1. Arithmetic Operators

Used for mathematical calculations.

| Operator | Meaning | Example |
|----------|---------|---------|
| + | Addition | 5 + 3 |
| - | Subtraction | 5 - 3 |
| * | Multiplication | 5 * 3 |
| / | Division | 10 / 2 |
| % | Modulus | 10 % 3 |

### Example

```c
int a = 10;
int b = 5;

printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
printf("%d\n", a / b);
printf("%d\n", a % b);
```

---

## 2. Relational Operators

Used to compare values.

| Operator | Meaning |
|----------|---------|
| == | Equal to |
| != | Not equal to |
| > | Greater than |
| < | Less than |
| >= | Greater than or equal to |
| <= | Less than or equal to |

### Example

```c
int a = 10;
int b = 5;

printf("%d\n", a > b);
printf("%d\n", a == b);
```

Output:

```text
1
0
```

---

## 3. Logical Operators

Used to combine conditions.

| Operator | Meaning |
|----------|---------|
| && | AND |
| || | OR |
| ! | NOT |

### Example

```c
int age = 18;

printf("%d\n", age >= 18 && age <= 60);
```

---

## Example Program

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    return 0;
}
```

---

## Output

```text
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
Modulus = 0
```

---

## Practice Questions

1. Add two numbers.
2. Subtract two numbers.
3. Multiply two numbers.
4. Find remainder using `%`.
5. Compare two numbers using `>` and `<`.

---

## Key Takeaways

- Operators perform operations on data.
- Arithmetic operators do calculations.
- Relational operators compare values.
- Logical operators combine conditions.

---

## Next Topic

➡️ Input and Output in C

Learn:
- printf()
- scanf()
- Taking user input

Happy Coding! 🚀