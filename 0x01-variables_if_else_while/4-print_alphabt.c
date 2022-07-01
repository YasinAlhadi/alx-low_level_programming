#include <stdio.h>
/**
 * main - prints the alphabet except q and e
 *
 * Description: program prints the alphabet except q and e
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
		putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
