#include "main.h"
/**
 * sqrt1 - return squar root of nuber
 * @n: int number
 * @i: iterator
 *
 * Return: -1 if number does not have squar
 */
int sqrt1(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sqrt1(n, i + 1));
}

/**
 * _sqrt_recursion - return squar root of number
 * @n: int number
 *
 * Return: -1 if number does not have squar root, or squar root
 */
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}

