#include "search_algos.h"
/**
 *interpolation_search - searches for a value in sorted array using
 *interpolation
 *@array:pointer to first element of array
 *@size:number of elements in the array
 *@value:value to search for
 *Return:value not present, array is NULL -1, otherwise first index
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, a, b;

	if (array == NULL)
		return (-1);
	for (a = 0, b = size - 1; b >= a;)
	{
		i = a + (((double)(b - a) / (array[b] - array[a])) * (value - array[a]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			b = i - 1;
		else
			a = i + 1;
	}
	return (-1);
}
