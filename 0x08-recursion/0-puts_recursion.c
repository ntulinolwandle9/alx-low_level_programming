#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string parameter
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar(10);
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
