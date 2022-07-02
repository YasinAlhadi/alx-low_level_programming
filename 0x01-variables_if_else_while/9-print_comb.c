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
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
		putchar(10);
		return (0);
}
