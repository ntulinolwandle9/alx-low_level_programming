#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				putchar('#');
			}
			if (height == size - 1)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
