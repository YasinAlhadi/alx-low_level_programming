#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets string lengh
 * @str: string
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: determiner
 * Return: pionter point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, i, j;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		len3 = len1 + len2 + 1;
	}
	else
	{
		len3 = len1 + n + 1;
		len2 = n;
	}
	ar = malloc(len3);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		ar[i + j] = s2[j];
		j++;
	}
	ar[i + j] = '\0';
	return (ar);
}
