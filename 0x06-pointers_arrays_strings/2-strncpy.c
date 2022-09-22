#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies the inputted num of bytes from string src into dest.
 * @dest: parameter one (The buffer storing the string copy)
 * @src: parameter two (the source string)
 * @n: The max num of bytes to copied from string
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;

	while (src[i++])
	{
		src_length++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = src_length; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
