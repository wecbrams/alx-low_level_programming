#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: source string
 * @b: byte for filling
 * @n: length of buffer
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

