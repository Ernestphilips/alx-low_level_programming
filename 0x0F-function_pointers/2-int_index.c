#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * Return: if no element matches or size <= 0 - -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;


	if (array == NULL || cmp == NULL)
		return (-1);

	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]) != 0)
			return (d);
	}

	return (-1);
}
