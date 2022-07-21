#include "main.h"
/**
 * prime - check if number is prime or not
 * @n: int number
 * @i: iterator
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - check if number is prime or not
 * @n: integer number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
