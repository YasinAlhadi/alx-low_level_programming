#include "main.h"
/**
 * string_toupper - change string to uppercase
 *
 * Return: string in uppercase
 */
char *string_toupper(char *)
{
	in i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
}
