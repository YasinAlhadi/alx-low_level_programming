#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - gets string length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: sring of arguments
 *
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int len, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
