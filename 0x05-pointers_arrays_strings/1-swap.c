#include "main.h"

/**
 * swap_int - swaps two integers values
 * @a: parameter one
 * @b: parameter two
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int temporary = *a;

	*a = *b;
	*b = temporary;
}
