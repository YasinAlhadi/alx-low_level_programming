#include "main.h"
/**
 * rev_string -  reverse a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, y, z;
	char a;

	i = 0;
	z = 0;
	while (s[i] != '\0')
		i++;
	z = i - 1;
	for (y = 0; y < i / 2; y++)
	{
		a = s[y];
		s[y] = s[z];
		s[z] = a;
		z -= 1;
	}
}
