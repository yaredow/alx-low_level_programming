#include "search_algos.h"
/**
 * exponential_search - searches for a value in an array with
 * the exponential search algorithm
 * @array: array to search
 * @size: len of array
 * @value: value to search for
 *
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	/* declarations */
	size_t begin, end, x;

	/* check for null array */
	if (!array)
		return (-1);

	end = 1;
	begin = 1;
	while (end < size)
	{
		if (value < array[end])
			break;
		printf("Value checked array[%d] = [%d]\n", (int) end, array[end]);
		begin = end;
		end = end * 2;
	}
	x = end < size - 1 ? end : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int) begin, (int) x);
	return (re_binary(array, value, end / 2, x));
}

/**
 * re_binary - recursive binary search
 * @array: array to search
 * @value: value to look for
 * @low: low side
 * @high: high side
 * Return: index of value or -1
 */
int re_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	print_it(array, low, high);
	if (high == low && array[low] != value)
		return (-1);

	mid = ((high - low) / 2) + low;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (re_binary(array, value, low, mid - 1));
	if (array[mid] < value)
		return (re_binary(array, value, mid + 1, high));
	return (-1);
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
