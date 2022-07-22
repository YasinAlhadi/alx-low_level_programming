#include "main.h"
/**
 * _atoi - return string
 * @s: string
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		_putchar(s[i]);
	i++;
	}
	return(0);
}
