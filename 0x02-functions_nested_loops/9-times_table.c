#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 time table
 *
 * Description: prints the 9 time table star with 0
 *
 * Return: void
 */
void times_table(void)
{
	int c, r, result;

		for (c = 0; c <= 9; c++)
		{
			printf("%d", c);
		}
		ptintf("\n");
		for (c = 0; c <= 9; c++)
		{
			printf("%d", c);
		}
		for (r = 0; r <= 9; r++)
		{
			printf("%d", c * r);
		}
		printf("\n");
}

