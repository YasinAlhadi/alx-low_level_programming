#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(args);
	if (n == 0)
	{
		printf("\n");
	}
}
