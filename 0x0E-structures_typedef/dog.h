#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: iiowner of the dog
 */
struct dog

{
	char *name;
	float age;
	char *owner;
};

/* function to initialiaze dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/*typedef for struct dog */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

/* Function to free memory allocated for a dog */
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
