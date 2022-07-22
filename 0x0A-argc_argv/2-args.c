#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed to program
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
