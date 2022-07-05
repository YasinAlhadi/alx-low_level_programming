#include "main.h"
/**
 * _islower - checks for alphabet character
 *
 *@c: ASCII char
 *
 * Return: 1 if c is lowercase and uppercse
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
