#include "main.h"

/**
 * swap_int -> given two integers swap the value they're holding.
 * @a: parameter a.
 * @b: parameter b.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
