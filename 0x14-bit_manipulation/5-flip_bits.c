#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: number
 * @m: another
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int s;
	unsigned long int xor;

	s = 0;
	xor = n ^ m;
	while (xor)
	{
		s += xor & 1;
		xor = xor >> 1;
	}

	return (s);
}
