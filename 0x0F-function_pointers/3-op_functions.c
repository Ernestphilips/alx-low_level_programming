#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts and returns difference of two integers
 * @a: first integer
 * @b: second integer
 * Return - the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies and returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Returns: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides and returns the quotient of two integers
 * @a: first integer
 * @b: second integer
 * Returns: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder after division
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int  b)
{
	return (a % b);
}
