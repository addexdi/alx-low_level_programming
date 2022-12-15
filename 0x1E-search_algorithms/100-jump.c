#include "search_algos.h"
int minimum(int left, int right);
/**
* jump_search - searches for a value in a sorted array
* of integers using jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: size of the array
* @value: is the value to search for
* Return: If value is not present in array return -1
*/
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, jump = sqrt((int)size), pos = 0;

	if (array == NULL)
		return (-1);
	for (; prev <= (int)size - 1; prev += jump)
	{
		if (array[prev] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	pos = prev - jump;
	printf("Value found between indexes [%d] and [%d]\n", pos, prev);
	for (; pos <= prev; pos++)
	{
		if (pos < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return (pos);
		}
	}
	return (-1);
}

/**
* minimum - return the minimum of two numbers
* @left: first number
* @right:second number
* Return: Return the minimum
*/
int minimum(int left, int right)
{
	return (left <= right ? left : right);
}
