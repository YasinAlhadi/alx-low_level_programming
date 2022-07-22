#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string to be filled
 * @b: value to be filled
 * @n: number of bytes
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
