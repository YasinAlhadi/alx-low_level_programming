#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Retrun: number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		else
		{
			x <<= 1;
			if (b[i] == '1')
				x += 1;
		}
	}
	return (x);
}
