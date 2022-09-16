#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');

}
