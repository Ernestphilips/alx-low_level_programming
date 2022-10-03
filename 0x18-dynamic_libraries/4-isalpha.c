#include "main.h"

/**
 * main- write a function that checks for alphabetical character.
 *
 * Return: 1 if c is lowercase otherwise 0
 */

int main(void); int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
