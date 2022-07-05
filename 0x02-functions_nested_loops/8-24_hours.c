#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
	
		for (m = 0; m <= 59; m++)
		{	
			printf("%2d :", h);
			printf("%2d", m);
			m++;
		}
		h++;
	}
	printf("\n");
}
