# Data Types in C 📚

## What are Data Types?

Data types tell the compiler what kind of data a variable can store.

Different types of data require different amounts of memory.

---

## Common Data Types in C

| Data Type | Description | Example |
|------------|------------|------------|
| int | Integer numbers | 10 |
| float | Decimal numbers | 5.5 |
| char | Single character | 'A' |
| double | Large decimal numbers | 10.12345 |

---

## Integer (int)

Stores whole numbers.

Example:

```c
int age = 18;
```

---

## Float (float)

Stores decimal numbers.

Example:

```c
float height = 5.8;
```

---

## Character (char)

Stores a single character.

Example:

```c
char grade = 'A';
```

Note:
Characters are enclosed in single quotes.

---

## Double (double)

Stores decimal numbers with higher precision.

Example:

```c
double salary = 25000.50;
```

---

## Example Program

```c
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
```

---

## Output

```
Age = 18
Height = 5.8
Grade = A
Salary = 25000.50
```

---

## Format Specifiers

| Data Type | Format Specifier |
|------------|------------|
| int | %d |
| float | %f |
| char | %c |
| double | %lf |

---

## Practice Questions

1. Create an int variable named marks.
2. Create a float variable named temperature.
3. Create a char variable named grade.
4. Create a double variable named balance.
5. Print all values.

---

## Key Takeaways

- Data types define what kind of data can be stored.
- int stores whole numbers.
- float stores decimal values.
- char stores a single character.
- double stores large decimal values with more precision.

---

## Next Topic

➡️ Operators in C

Learn:
- Arithmetic Operators
- Relational Operators
- Logical Operators

Happy Coding! 🚀