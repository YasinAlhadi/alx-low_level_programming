#include <stdio.h>
#include <unistd.h>
/**
 * main - print string
 *
 * Desciption: print string without printf and puts
 *
 * Return: Always 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
}
