#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9')
	{
		_putchar(c);
	}
	_Putchar('\n');
}
