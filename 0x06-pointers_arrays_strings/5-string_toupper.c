#include "main.h"
/**
 * string_toupper - change string to uppercase
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	in i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			str[i] = s[i] - 32;
	}
	return (s)
}
