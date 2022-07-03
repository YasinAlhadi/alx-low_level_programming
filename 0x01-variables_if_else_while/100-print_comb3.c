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
	int x, y;

	x = 48;
	y = 48;
	while (x < 58)
	{
		y = 48;
		while (y < 58)
		{
			putchar(x);
			putchar(y);

			if (x < 57 || y < 57)
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
