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
	int i, c;

	i = 0;
	c = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && c == n - 1)
		{
			printf("%d, ", a[i]);
			i++;
			c++;
		}
		printf("%d\n", a[i]);
	}
}
