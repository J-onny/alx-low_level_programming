#include "search_algos.h"

/**
 * linear_search - linear search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t p = 0;

	if (!array || size <= 0)
		return (-1);
	for (p = 0; p < size; p++)
	{
		printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}
	return (-1);
