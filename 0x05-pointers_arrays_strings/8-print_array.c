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

	i = 0;
	while (a[i] != '\0' )
	{
		if (i == n -1)
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
		printf("%d\n", a[i]);
}
