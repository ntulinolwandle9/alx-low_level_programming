#include "main.h"
#include <stdio.h>

/**
 * _puts -prints a string
 * @str: The string parameter
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
}
