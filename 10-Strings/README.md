# Strings in C 📝

## What is a String?

A string is a sequence of characters stored in a character array.

Example:

```c
char name[] = "Tanmay";
```

Here, the string contains multiple characters:

```text
T a n m a y
```

---

# Why Use Strings?

Strings help us:

- Store names
- Store messages
- Store sentences
- Handle text data

---

# Declaring a String

```c
char name[] = "Tanmay";
```

---

# Printing a String

Use `%s` with `printf()`.

Example:

```c
printf("%s", name);
```

Output:

```text
Tanmay
```

---

# Taking String Input

Example:

```c
char name[50];

scanf("%s", name);
```

Note:

`scanf("%s", name)` reads only one word.

For example:

Input:

```text
Tanmay Patil
```

Output:

```text
Tanmay
```

---

# Using fgets()

To read a full sentence:

```c
char name[50];

fgets(name, sizeof(name), stdin);
```

Example Input:

```text
Tanmay Patil
```

Output:

```text
Tanmay Patil
```

---

# Example Program

```c
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello %s", name);

    return 0;
}
```

---

# String Functions

Include:

```c
#include <string.h>
```

Common functions:

| Function | Purpose |
|-----------|----------|
| strlen() | Length of string |
| strcpy() | Copy string |
| strcat() | Join strings |
| strcmp() | Compare strings |

---

## strlen()

```c
char name[] = "Tanmay";

printf("%lu", strlen(name));
```

Output:

```text
6
```

---

## strcat()

```c
char first[] = "Hello ";
char second[] = "World";

strcat(first, second);

printf("%s", first);
```

Output:

```text
Hello World
```

---

## strcmp()

```c
strcmp("abc", "abc");
```

Returns:

```text
0
```

Because both strings are equal.

---

# Practice Questions

1. Print your name using a string.
2. Take a name as input and display it.
3. Find the length of a string.
4. Concatenate two strings.
5. Compare two strings.

---

# Mini Project

Name Greeting Program

Input:

```text
Enter your name: Tanmay
```

Output:

```text
Welcome Tanmay
```

---

# Key Takeaways

- Strings store text data.
- Strings are character arrays.
- `%s` is used to print strings.
- `fgets()` can read complete sentences.
- `<string.h>` provides useful string functions.

---

# Next Topic

➡️ Pointers in C

Learn:
- Memory addresses
- Pointer variables
- Dereferencing
- Pass by reference

Pointers are one of the most powerful features of C and are heavily used in advanced programming. 🚀