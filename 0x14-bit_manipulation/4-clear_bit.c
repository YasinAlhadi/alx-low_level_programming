#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	i = 1;
	i = i << index;
	i = ~i;
	*n = *n & i;

	return (1);
}
