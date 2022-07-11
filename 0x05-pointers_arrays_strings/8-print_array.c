#include <std.h>
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
	int i = 0;

	while (a[i] < n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf('\n');
}
