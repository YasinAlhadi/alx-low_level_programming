#include <sdt.h>
#include <sdtlib.h>
#include <time.h>
/**
 * main - print last digit of number
 *
 * Decription: program will assign a random number to the variable n each
 * time it's execute
 *
 * Return: Always (0) (Seccess)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("The last digit of %d is %d and is > 5\n", n, last);
	else if (last == 0)
		printf("The last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("The last digit of %d is %d adn is less than 6 and not 0\n", n, last);
	return (0);
}
