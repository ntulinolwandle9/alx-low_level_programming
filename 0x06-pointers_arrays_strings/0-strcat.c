#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings pointed to by @src
 * @dest: char parameter one
 * @src: parameter two that takes a char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
	{
		length++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[length++] = src[i];
	}

	return (dest);
}
