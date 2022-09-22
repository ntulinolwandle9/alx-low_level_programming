#include "main.h"
#include <stdio.h>

/**
 * _strncat - concetenates two strings
 * @dest: string one
 * @src: string two
 * @n: num of bytes
 *
 * Return: pointer to the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
