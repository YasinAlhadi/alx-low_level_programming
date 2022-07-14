#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i, w;

	for (i = 0; s[i] != '\0'; i++)
	{
		w = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[w] >= 9 && s[w] <= 10)
				s[i] = s[i] - 32;
			else if (s[w] >= 32 && s[w] <= 34)
				s[i] = s[i] - 32;
			else if (s[w] >= 40 && s[w] <= 41)
				s[i] = s[i] - 32;
			else if (s[w] == 46)
				s[i] = s[i] - 32;
			else if (s[w] == 59)
				s[i] = s[i] - 32;
			else if (s[w] >= 123 || s[w] <= 125)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
