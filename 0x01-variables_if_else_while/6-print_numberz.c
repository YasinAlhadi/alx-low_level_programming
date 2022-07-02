#include <stdio.h>
/**
 * main - print digit number
 *
 * Description: program prints digit number
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
