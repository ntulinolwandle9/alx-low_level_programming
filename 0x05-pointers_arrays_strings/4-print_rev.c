#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 * @s: parameter
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
	{
		putchar(*(s + length));
	}
	putchar(10);
}
