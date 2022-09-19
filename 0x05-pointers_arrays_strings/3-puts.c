#include "main.h"

/**
 * _puts - prints out a string followe by a new line
 * @str: parameter
 * Return nothing
 */
void _puts(char *str)
{
	int i;

	for (int i = 0, str[i] != 0, i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
