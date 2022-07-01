#include <stdio.h>
/**
 * main - prints all single digit numbers base 10
 *
 * Description: program prints all single number base 10 start from 0
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
