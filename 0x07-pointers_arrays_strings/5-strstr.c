#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: source
 *
 * Return: count of the characters
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	int len = 0;

	i = 0;
	j = 0;
	start = 0;
	while (needle[len] != '\0')
	{
		len++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; j < len && haystack[i] == needle[j]; j++, i++)
	{
		if (j == 0)
		{
			start = i;
		}
		if (j == len - 1)
		{
			return (haystack + start);
		}
	}
	}
	return (0);
}
