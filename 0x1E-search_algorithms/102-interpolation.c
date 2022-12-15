#include "search_algos.h"
/**
 * interpolation_search - Write a function that searches
 * for a value in a sorted array of integers using
 * the interpolation search algorithm
 * @array:  is a pointer to the first element of the
 * array to search in
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the index of the found value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array != NULL)
	{
		while (low <= high && value >= array[low] && value <= array[high])
		{
			pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
			if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	return (-1);
}
