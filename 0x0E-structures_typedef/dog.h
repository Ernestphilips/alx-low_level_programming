#ifndef DOG_H
#define DOG_H

/**
 * file: dog.h
 * desc: header file that defines a new type struct dog
 */
/**
 * struct dog - a new type def dog
 * @name: name of dog
 * @owner: name of owner
 * @age: how old is the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef struct for dog
 */
typdef struct dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

