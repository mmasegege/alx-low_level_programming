#include "main.h"

/**
* _abs - computes the absolute value of a passed integer
* @n: the integer to be passed
* Return: function returns 0 if successful
*/
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
