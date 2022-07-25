#include "main.h"
#include <stdlib.h>
/**
 * create_array -  initialize array with a specific char
 * @size: size of array
 * @c: charcter
 *
 * Return: NULL if size = 0 or pointer to the array,
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
