#include <stdio.h>
/**
 * main - print number based of 16
 *
 * Decription: print number based of 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 0;

		while (x < 48)
		{
			if (x < 10)
				putchar(x + '0');
			else if (x > 41)
				putchar(x - 10 = 'A');
			x++;
		}
	putchar(10);
	return (0);
}
