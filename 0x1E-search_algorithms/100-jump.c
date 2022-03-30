#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: what we are searching
 * @size: len of array
 * @value: what we are searching for
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	/* declarations */
	int jump, i;

	/* check for null array */
	if (!array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jump)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);

	for (i -= jump; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* not in the array */
	return (-1);
}
