#include <stdio.h>
/**
 * main - print digit number
 *
 * Description: program prints digit number
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
