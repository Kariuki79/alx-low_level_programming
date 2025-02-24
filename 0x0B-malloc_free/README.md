0-create_array.c
Description
This program defines a function create_array that dynamically allocates memory for an array of characters and initializes it with a specific character.

Prototype
c
Copy
Edit
char *create_array(unsigned int size, char c);
Functionality
The function takes in two parameters:
size: The number of elements in the array.
c: The character used to initialize each element of the array.
If size is 0, the function returns NULL.
The function allocates memory using malloc.
If memory allocation fails, it returns NULL.
Otherwise, it initializes the array with the character c and returns a pointer to it.



# 0x0B-malloc_free

## **Project Overview**
This project focuses on dynamic memory allocation using `malloc` and `free` in C. It includes functions that allocate memory, copy strings, and manage memory efficiently.

## **1. _strdup Function**
### **Description**
The `_strdup` function duplicates a given string into a newly allocated memory space.

### **Prototype**
```c
char *_strdup(char *str);




# 0x0B-malloc_free

## **3. alloc_grid Function**
### **Description**
The `alloc_grid` function dynamically allocates memory for a 2D array of integers and initializes all elements to `0`.

### **Prototype**
```c
int **alloc_grid(int width, int height);




## **4. free_grid Function**
### **Description**
The `free_grid` function releases the memory allocated for a 2D array of integers.

### **Prototype**
```c
void free_grid(int **grid, int height);




## **100. argstostr Function**
### **Description**
The `argstostr` function concatenates all arguments of the program into a single string, separating each argument with a newline (`\n`).

### **Prototype**
```c
char *argstostr(int ac, char **av);







String to Words (strtow)
Description
This program implements a function that splits a string into words. A word is defined as a sequence of characters separated by spaces. The function dynamically allocates memory for each word and returns an array of strings (words).

Prototype
c
Copy
Edit
char **strtow(char *str);
Parameters
char *str: A pointer to the input string.
Return Value
Returns a pointer to an array of strings (words).
Returns NULL if:
The input string is NULL or empty.
Memory allocation fails.
There are no words in the string.
Helper Functions
int count_words(char *str);
Counts the number of words in a string.

char *allocate_word(char *str, int start, int end);
Allocates memory and extracts a word from the string.

Compilation & Usage
Compiling the Code
To compile the code, use the following command:

bash
Copy
Edit
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
Running the Program
To run the compiled executable:

bash
Copy
Edit
./strtow
Example
Input:

c
Copy
Edit
char *str = "Hello world";
Output:

css
Copy
Edit
["Hello", "world"]
Memory Management
The function dynamically allocates memory using malloc.
It ensures proper memory cleanup in case of allocation failure.
Code Style
The code follows the Betty coding style.
It adheres to GNU89 standards.

