#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_search - searches for a value in an array of integers
* using the binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: size of array
* @value: value to search for
* Return: ndex where value is located if successful else -1
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + ((right - left) / 2);
		int i = left;

		printf("Searching in array: ");
		while (i <= right)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
			i++;
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
