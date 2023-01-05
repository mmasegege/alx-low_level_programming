#include "main.h"

/**
 * factorial - this function returns the factorial of a given number
 * @n: the number to be calculated
 * Return: this returns the factorial of n as integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
