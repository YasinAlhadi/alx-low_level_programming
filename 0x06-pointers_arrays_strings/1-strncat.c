#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second srting
 * @n: number of bytes
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
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
