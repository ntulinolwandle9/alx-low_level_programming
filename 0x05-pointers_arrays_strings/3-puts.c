#include "main.h"

/**
 * _puts - prints out a string followe by a new line
 * @str: parameter
 * Return nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_puts(*str++);
	}
	_puts('\n');
}
