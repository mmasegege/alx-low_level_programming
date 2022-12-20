#include <stdio.h>
#include "main.h"

/**
 * swap_int - the function swaps the values of two provided integers a and b
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: the program returns nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
