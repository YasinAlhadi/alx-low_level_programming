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
	h = 0;

	while (h <= 23)
	{
	
		while (m <= 59)
		{
			printf("%2d :", h);
			printf("%2d", m);
			m++;
		}
		h++;
	}
	printf("\n");
}
