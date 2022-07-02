#include <stdio.h>
/**
 * main - print digit number
 *
 * Description: program prints digit number
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a;

	a = 1;

	while (a < 11)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
