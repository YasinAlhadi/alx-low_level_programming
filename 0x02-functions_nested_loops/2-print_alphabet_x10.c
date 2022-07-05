#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int x = 10;

	while (x < 10)
	{
		char a ='a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		x++;
	}
	_putchar('\n');
}
