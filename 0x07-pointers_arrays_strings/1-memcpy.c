#include "main.h"

/**
 * _memcpy - fills memory with another buffer
 * @dest: source string
 * @src: string for filling
 * @n: length of buffer
 * Return: new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		*(dest + y) = *(src + y);
		y++;
	}
	return (dest);
}

