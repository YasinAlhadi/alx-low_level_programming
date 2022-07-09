#include <stdio.>
/**
 * main -  print the largest prime factor
 *
 * Desciption: program that finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int d = 2;

	while (num != d)
	{
		if (num % d == 0)
		{
			num = num / d;
		}
		else
		{
			d++;
		}
	}
	printf("%li\n", num);
	return (0);
}
