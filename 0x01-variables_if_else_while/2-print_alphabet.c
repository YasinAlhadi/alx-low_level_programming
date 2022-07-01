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
	char ch = 'a';

	putchar("The alphabet in lowercase:\n");
	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
	}
	return (0);
}
