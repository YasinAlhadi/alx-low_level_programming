#include "main.h"
/**
 * reverse_array - reverse an array of integer
 * @a: pointer
 * @n: number of element
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
