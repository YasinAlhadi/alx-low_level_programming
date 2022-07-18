#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 *
 * Return: count of the characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int prev = 0;
	int count = 0;
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			count++;
		}
		j++;
		if (prev == count)
		{
			break;
		}
		i++;
	}
	return (count);
}
