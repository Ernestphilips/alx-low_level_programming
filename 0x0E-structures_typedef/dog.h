#ifndef DOG_H
#define DOG_H

/**
 * file: dog.h is a header file.
 * desc: header file that defines a new type struct dog
 */

/**
 * struct dog - a new type describing a dog
 * @name: name of dog
 * @owner: name of owner
 * @age: how old is the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

