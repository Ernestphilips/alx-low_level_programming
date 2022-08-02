#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog to be printed
 * Return: nil if element of d is NULL,
 * and nothing if d is NULL.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n",  d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
