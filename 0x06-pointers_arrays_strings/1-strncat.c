#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second srting
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	for (j = 0; src[j] != '\0'; ++j, ++len)
		dest[len] = src[j];
	dest[len] = '\0';

	return (dest);
}
