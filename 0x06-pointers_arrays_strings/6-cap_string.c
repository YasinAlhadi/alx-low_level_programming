#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[i - 1] >= 9 && s[i - 1] <= 10)
				s[i] = s[i] - 32;
			else if (s[i - 1] >= 32 && s[i - 1] <= 34)
				s[i] = s[i] - 32;
			else if (s[i - 1] >= 40 && s[i - 1] <= 41)
				s[i] = s[i] - 32;
			else if (s[i - 1] == 46)
				s[i] = s[i] - 32;
			else if (s[i - 1] == 59)
				s[i] = s[i] - 32;
			else if (s[i - 1] >= 123 && s[i - 1] <= 125)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
