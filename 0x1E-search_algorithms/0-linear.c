#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* linear_search - searches for a value in an array of integers
* using the Linear search algorithm
* @array: pointer to the first element of the array to search in
* @size: size of array
* @value: value to search for
* Return: first index where value is located if successful else -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
