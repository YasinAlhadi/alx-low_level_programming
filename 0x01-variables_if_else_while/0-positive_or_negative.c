#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check if number is positive or negative
 *
 * Description:  program will assign a random number to the variable n each
 * time it's execute
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
