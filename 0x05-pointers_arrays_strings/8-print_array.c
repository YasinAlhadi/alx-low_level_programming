#include <stdio.h>
#include "main.h"
/**
 *  print_array -  print n elements of an array of integers
 *  @a: piontr
 *  @n: number of element
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
		while (a[i] != '\0' && c < n)
		{
			printf("%d, ", a[i]);
			i++;
			c++;
		}
		printf("%d\n", a[i]);
	}
}
