#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: parameter string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, leng = _strlen(str);

	for (i = ((leng - 1) / 2) + 1; i < leng; i++)
	{
		putchar(*(str + i ));
	}
	putchar(10);
}

/**
 *  _strlen - returns the length of a string
 *  @s: paramter string
 *
 *  Return: the length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*(s + leng) != '\0')
	{
		leng++;
	}
	return (leng);
}
