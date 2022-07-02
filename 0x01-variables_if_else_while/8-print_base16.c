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

		while (x <= 15)
		{
			putchar("%x", x)
			x++;
		}
	putchar(10);
	return (0);
}
