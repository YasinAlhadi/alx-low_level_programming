#include "main.h"
/**
 * _strncat - concatenates two strings
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
		len++;
	}
	for (j = 0; j < n; && src[j] != '\0'; j++)
		dest[len + j] = src[j];
	dest[len] = '\0';

	return (dest);
}
