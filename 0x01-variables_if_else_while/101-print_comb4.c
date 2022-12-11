#include<stdio.h>

/**
 * main - main block
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separeted by commas and a space.
 * Th 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use 'putchar' to print to console.
 * You can only use 'putchar' up to 6 times.
 * You are not allowed to use any variable of type 'char'.
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for(x = 48; x < 58; x++)
	{
		for(y = 49; y < 58; y++)
		{
			for(z = 50; z < 58; z++)
			{
				if(y > x && z > y)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return(0);
}

