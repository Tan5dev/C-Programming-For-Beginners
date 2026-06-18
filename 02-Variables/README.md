# Variables in C 📦

## What is a Variable?

A variable is a named storage location used to store data in a program.

Think of a variable as a box that holds a value.

Example:

```c
int age = 18;
```

Here:

- `int` → Data type
- `age` → Variable name
- `18` → Value stored in the variable

---

## Why Do We Use Variables?

Variables help us:

- Store data
- Update data
- Perform calculations
- Reuse values throughout a program

Without variables, programs would be much less useful.

---

## Syntax

```c
data_type variable_name = value;
```

Example:

```c
int marks = 95;
```

---

## Example Program

```c
#include <stdio.h>

int main() {
    int age = 18;

    printf("Age = %d", age);

    return 0;
}
```

### Output

```
Age = 18
```

---

## Multiple Variables

```c
#include <stdio.h>

int main() {
    int age = 18;
    int marks = 95;

    printf("Age = %d\n", age);
    printf("Marks = %d\n", marks);

    return 0;
}
```

---

## Rules for Naming Variables

✅ Valid Variable Names

```c
age
studentName
total_marks
number1
```

❌ Invalid Variable Names

```c
1age
student-name
int
total marks
```

---

## Common Data Types Used with Variables

| Data Type | Example |
|------------|------------|
| int | 10 |
| float | 5.5 |
| char | 'A' |
| double | 10.12345 |

Example:

```c
int age = 18;
float height = 5.8;
char grade = 'A';
double salary = 25000.50;
```

---

## Practice Questions

1. Create a variable named `marks` and store 90.
2. Create a variable named `price` and store 99.99.
3. Create a variable named `grade` and store 'A'.
4. Print all variables using `printf()`.

---

## Key Takeaways

- Variables store data.
- Every variable has a data type.
- Variables make programs dynamic and reusable.
- Variable names should be meaningful.

---

## Next Topic

➡️ Data Types in C

Learn about:
- int
- float
- char
- double

Happy Coding! 🚀