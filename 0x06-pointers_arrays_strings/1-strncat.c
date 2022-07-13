#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second srting
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
