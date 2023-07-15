#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element of the array
  * @neg: The starting index of the sub array.
  * @pos: The ending index of the sub array
  * @value: The value to search input
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value where is located.
  *
  * Description: Print the sub array being searched after each change.
  */
int _binary_search(int *array, size_t neg, size_t pos, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (pos >= neg)
	{
		printf("Searching in array: ");
		for (i = neg; i < pos; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = neg + (pos - neg) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			pos = i - 1;
		else
			neg = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element in the array.
  * @size: The number of elements in the array.
  * @value: The input value
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, pos;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	pos  = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, pos);
	return (_binary_search(array, i / 2, pos, value));
}
