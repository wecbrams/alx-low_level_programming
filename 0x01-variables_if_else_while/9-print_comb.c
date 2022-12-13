#include<stdio.h>

/**
 * main - main  block
 * Description: Print all possible combintions for single-digit numbers.
 * Numbers must be separeted by commas and a space.
 * You can only use 'putchar' to print to console
 * You can only use 'putchar' up to four times.
 * You are not allowed to use any variable of the type 'char'.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++;)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n')
	return (0);
}

