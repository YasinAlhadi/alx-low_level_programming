#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 *
 * Description: program that prints the alphabet in lowercase, and then
 * in uppercase
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a, x;

	a = 97;
	x = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (x < 91)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
