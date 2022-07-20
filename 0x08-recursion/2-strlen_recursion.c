#include "main.h"
/**
 * _strlen_recursion - return the lenght of string
 * @s: string
 *
 * Return: int lenght
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
