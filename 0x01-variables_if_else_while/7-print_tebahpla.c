#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 *
 * Description: program prints the lowercase alphabet in reverse
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a = 122;

	while (a < 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
