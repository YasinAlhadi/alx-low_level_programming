#include "main.h"
/**
 *  _atoi - convert string to ineger
 *  @s: string
 *
 *  Return: value of convert
 */
int _atoi(char *s)
{
	int y = 1;
	unsigned int x = 0;

	do {
		if (*s == '-')
			y *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');
		else if (x > 0)
			break;
	} while (*s++);
	return (x * y);
}
