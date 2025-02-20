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




