#include "main."
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int len, i;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	ar = (char *) malloc(len * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
