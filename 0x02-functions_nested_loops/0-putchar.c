#include "main.h"
/**
 * main - print _putchar
 *
 * Description: program print _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char print_st[9] = "_putchar";
	int x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(print_st[x]);
	}
	_putchar("\n");
	return (0);
}
