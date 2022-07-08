#include "main.h"

/**
 * print_square - prints a square
 * @size:  is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
