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
	if (argc <= 2 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
