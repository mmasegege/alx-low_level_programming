#include "search_algos.h"

/**
 * binary_search - searches a value of integers in an array
 * of using Linear search algorithm
 * @array: input an array
 * @size: size of an array
 * @value: value to search input
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, fst, sec;

	if (array == NULL)
		return (-1);
	for (fst = 0, sec = size - 1; sec >= fst;)
	{
		printf("Searching in array: ");
		for (i = fst; i < sec; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = fst + (sec - fst) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			sec = i - 1;
		else
			fst = i + 1;
	}
	return (-1);
}
