#include<stdio.h>

/**
 * main - main block
 * Description: Print alll possible combinations of two digits.
 * Numbers must be separeted by commas and space.
 * 01 and 10 are considered as the same combination of the two digits 
 * Print only the smallest conbination of two digits.
 * Numbers shi=ould be printed in ascending order, with two digits.
 * You can only use 'putchar'.
 * You can only use 'putchar' up to 5 times.
 * You are not allowed to use any variable of type 'char'.
 * Return: 0
 */

int main(void)
{
	int x, y;

	for(x = 48; x < 58; x++)
	{
		for(y = 49; y < 58; y++;)
		{
			if(y > x)
			{
				putchar(x);
				putchar(x);
				if(x < 56 || y < 57)
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

