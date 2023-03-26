#include"main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch = 0;
	void _putchar(void);

	while (str[ch] != '\0')
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');

	return (0);
}

