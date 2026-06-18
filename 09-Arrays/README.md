# Arrays in C 📚

## What is an Array?

An array is a collection of elements of the same data type stored in contiguous memory locations.

Instead of creating multiple variables:

```c
int mark1 = 85;
int mark2 = 90;
int mark3 = 78;
int mark4 = 92;
int mark5 = 88;
```

You can use an array:

```c
int marks[5] = {85, 90, 78, 92, 88};
```

---

# Why Use Arrays?

Arrays help us:

- Store multiple values
- Organize data efficiently
- Access data using indexes
- Work easily with loops

---

# Syntax

```c
data_type array_name[size];
```

Example:

```c
int marks[5];
```

---

# Initializing an Array

```c
int marks[5] = {85, 90, 78, 92, 88};
```

---

# Accessing Elements

Array indexing starts from **0**.

```c
marks[0]
marks[1]
marks[2]
marks[3]
marks[4]
```

Example:

```c
printf("%d", marks[0]);
```

Output:

```text
85
```

---

# Modifying Elements

```c
marks[0] = 100;
```

Now the first element becomes 100.

---

# Using Loops with Arrays

```c
#include <stdio.h>

int main() {
    int marks[5] = {85, 90, 78, 92, 88};

    for(int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
```

Output:

```text
85
90
78
92
88
```

---

# Taking Input in Arrays

```c
int marks[5];

for(int i = 0; i < 5; i++) {
    scanf("%d", &marks[i]);
}
```

---

# Example Program

```c
#include <stdio.h>

int main() {
    int marks[5] = {85, 90, 78, 92, 88};

    for(int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
```

---

# Practice Questions

1. Store 5 numbers in an array and print them.
2. Find the largest number in an array.
3. Find the smallest number in an array.
4. Calculate the sum of array elements.
5. Calculate the average of array elements.

---

# Mini Project

Student Marks Manager

Input:

```text
Enter 5 marks:
```

Output:

```text
Total Marks = 433
Average Marks = 86.6
```

---

# Key Takeaways

- Arrays store multiple values of the same data type.
- Array indexing starts from 0.
- Arrays work very well with loops.
- Arrays help manage large amounts of data efficiently.

---

# Next Topic

➡️ Strings in C

Learn:
- Character arrays
- String input and output
- Common string operations

Happy Coding! 🚀