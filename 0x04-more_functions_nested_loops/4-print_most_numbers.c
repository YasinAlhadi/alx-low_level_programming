#include "main.h"
/**
 * print_most_numbers - print numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9')
	{
		if (x != 2 && x != 4)
			_putchar(x);
	}
	_putchar('\n');
}
