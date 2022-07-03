#include <stdio.h>
/**
 * main -  print all possible different combinations of two digits
 *
 * Description: program  prints all possible different combinations of two
 * digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	x = 48;
	y = 48;
	z = 48;
	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (k < 58)
			{
				putchar(x);
				putchar(y);
				putchar(z);
			if (x < 55 || y < 56 || z < 57)
			{
				putchar(44);
				putchar(32);
			}
			z++;
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
