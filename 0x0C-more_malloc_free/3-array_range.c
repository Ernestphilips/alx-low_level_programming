#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last integer
 * Return: if min > max, NULL. If malloc fails, NULL.
 * otherwise, an array.
 */
int *array_range(int min, int max)
{
	int *array, num, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		array[num] = min++;
	return (array);

}
