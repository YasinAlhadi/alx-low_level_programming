#include <stdio.h>
/**
 * main - prints combination digit
 *
 * Description: print all combination digit separated by ,
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	int x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(48);
			putchar(32);
		}
		x++;
	}
		putchar(0);

		return (0);
}
