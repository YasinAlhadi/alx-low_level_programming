#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char y = 'a';

	while (x < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
	}
	_putchar('\n');
	x++;
}
