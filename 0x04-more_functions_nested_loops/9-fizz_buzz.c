#include <std.h>
/**
 * main - print fizz buzz
 *
 * Description: print fizz buzz from 1 - 100
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
