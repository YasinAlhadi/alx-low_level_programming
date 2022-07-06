#include <stdio.h>
/*
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Description: program compute and print the sum
 *
 * Return: 0
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1025; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	return (0);
}
