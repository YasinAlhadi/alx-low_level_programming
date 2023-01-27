#include <stdio.h>

/**
 * print_array - prints the array being searched every time it changes.
 * @array: pointer to the first element of the array to search in
 * @l: left index of the array.
 * @r: right index of the array.
 * Return: void.
*/
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: index where value is located or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
