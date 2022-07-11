#include <stdio.h>
#include "main.h"
/**
 *  print_array -  print n elements of an array of integers
 *  @a: integer array
 *  @n: number of element to print
 *
 *  Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
		printf("\n");
}
