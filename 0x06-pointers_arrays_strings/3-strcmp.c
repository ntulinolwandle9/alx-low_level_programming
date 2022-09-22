#include <stdio.h>
#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: If str1 < str2, the negative difference of the unmatched characters
  *         If srtr1 == str2, 0
  *         If str1 > str2, the positive difference of the unmatched characters
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
