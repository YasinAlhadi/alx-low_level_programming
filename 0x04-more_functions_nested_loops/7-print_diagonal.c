#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 0;
	int space;

	if (n > 0)
	{
		while (line < n)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
