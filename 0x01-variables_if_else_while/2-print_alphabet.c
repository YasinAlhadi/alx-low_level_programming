#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: program prints the alphabet in lowercase
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int a = 97;

	while (a <= 123)
	{
		putchar(a);
		a++;
	}
	putchar(a);
	return (0);
}
