#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every character
 * @str: parameter
 *
 * Return: nothings
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar(10);
}
