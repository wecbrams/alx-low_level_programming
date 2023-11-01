#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
        char *cr;
        unsigned int i;

        if (size == 0)
        {
                return (NULL);
        }

        cr = malloc(sizeof(char) * size);

        if (cr == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < size; i++)
        {
                cr[i] = c;
        }

        return (cr);
}
