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
	for (int i = 0; a[i] < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
