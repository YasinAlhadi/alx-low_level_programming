#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed to program
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
