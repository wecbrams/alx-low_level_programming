#include "main.h"

/**
 * print_triangle - check for a digit
 *
 * @size: integer type
 *
 * Return: void
 */

void print_triangle(int size)
{
	
	int i = 1;
	int ii;


	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size && size < 0)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');

}
