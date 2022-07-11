#include "main.h"
/**
 * print_rev - print a string, in reverse
 * @s: pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (str[i] >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
