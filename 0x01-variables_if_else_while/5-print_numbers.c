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
	int x;

	x = 10;

	while (x < 20)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
