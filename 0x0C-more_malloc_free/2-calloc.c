#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size of memory
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);
	s = ar;
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (ar);
}
