#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string parameter
 * Return: returns 0
 */
void _puts_recursion(char *s)
{
	_putchar("%c", *s);
	_putchar('\n');
	return (0);
}
