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

