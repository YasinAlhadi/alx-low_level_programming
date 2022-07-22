#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 *@c: ASCII char
 *
 * Return: 1 if lwoercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
