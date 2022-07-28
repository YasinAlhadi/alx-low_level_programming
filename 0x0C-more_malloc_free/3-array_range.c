#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum interger
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar, diff, num, j;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	ar = malloc(diff * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (num = min, j = 0; num <= max && j < diff; num++, j++)
	{
		ar[j] = num;
	}
	return (ar);
}
