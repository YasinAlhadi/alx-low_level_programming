#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Description: program print the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int f, s, sum, c;

	f = 0;
	n = 1;
	sum = 0;

	while (c <= 49)
	{
		sum = f + s;
		printf("%i, ", sum);
		f = s;
		s = sum;
		c++;
	}
	sum = f + s;
	printf("%i, ", sum);
}
