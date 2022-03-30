#include "search_algos.h"
/**
 * advanced_binary - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search
 * @size: len of array
 * @value: value we look for
 * Return: index of value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (do_binary(array, value, 0, size - 1));
}
/**
 * print_it - to print the array we are searching
 * @arr: ptr to first element the array
 * @begin: [0] element
 * @end: last element to print
 */
void print_it(int *arr, int begin, int end)
{
	printf("Searching in array: ");
	for (; begin <= end; begin++)
	{
		if (begin == end)
			printf("%d\n", arr[begin]);
		else
			printf("%d, ", arr[begin]);
	}
}
/**
 * do_binary - a helper to do binary search recursively
 * @array: the array
 * @value: that we search for
 * @low: zero end
 * @high: high end
 * Return: index of value or -1
 */
int do_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_it(array, low, high);

	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;

	if (array[mid] == value)
	{
		if (array[mid - 1] == value)
			return (do_binary(array, value, low, mid));
		else
			return (mid);
	}
	if (array[mid] < value)
		return (do_binary(array, value, mid + 1, high));
	if (array[mid] > value)
		return (do_binary(array, value, low, mid));
	return (-1);
}
