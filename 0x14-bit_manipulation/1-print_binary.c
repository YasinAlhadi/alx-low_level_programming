#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, check;
	unsigned int a;

	check = 0;
	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		a = (n >> i) & 1;
		if (a == 1)
			check = 1;
		if (check == 1)
			_putchar(((n >> i) & 1) + '0');
	}
}
