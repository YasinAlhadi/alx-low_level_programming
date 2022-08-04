#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list op;
	unsigned int i, j;
	char *st;
	const char arg[] = "c, i, f, s";

	va_start(op, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && i)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(op, int));
			break;
		case 'i':
			printf("%d", va_arg(op, int));
			break;
		case 'f':
			printf("%f", va_arg(op, double));
			break;
		case 's':
			st = va_arg(op, char *);
			if (st == NULL)
				st = "(nil)";
			printf("%s", st);
			break;
		default:
			break;
		} i++;
	} va_end(op);
	printf("\n");
}
