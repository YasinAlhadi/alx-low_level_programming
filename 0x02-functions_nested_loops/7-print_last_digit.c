#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer number
 *
 * Return: last
 */
int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last);
	return (last);
}
