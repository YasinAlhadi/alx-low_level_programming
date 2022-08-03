#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of person
 * @f: function pointer
 *
 * Return: void/
 */
void print_name(char *name, void (*f)(char *))
{
	_putchar(name);
	f(name);
}

