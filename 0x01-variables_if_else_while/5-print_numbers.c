#include <stdio.h>
/**
 * main - print digit number
 *
 * Description: program prints digit number start from 0
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
