#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that defines a dog's basic info
 * @name: Name of the dog(string)
 * @age: Age of the dog(float)
 * @owner: Owner of the dog(strin)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
