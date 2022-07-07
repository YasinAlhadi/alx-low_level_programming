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
	long int f, s, sum;
	int c;

	f = 0;
	s = 1;
	sum = 0;

	while (c <= 49)
	{
		sum = f + s;
		printf("%li, ", sum);
		f = s;
		s = sum;
		c++;
	}
	sum = f + s;
	printf("%li, ", sum);
	return (0);
}
