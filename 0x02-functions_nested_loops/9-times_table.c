#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table star with 0
 *
 * Return: void
 */
void times_table(void)
{
	int c, r, result;

		for (c = 0; c <= 9; c++)
		{
			for (r = 0; r <= 9; r++)
			{
				result = c * r;
				_putchar('c');
				_putchar('*');
				_putchar('r');
				_putcahr('=');
				_putchar(result);
			}
		}
		_putchar('\n');
}

