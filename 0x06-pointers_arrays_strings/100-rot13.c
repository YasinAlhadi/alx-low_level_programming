#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encode
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}
	return (s);
}
