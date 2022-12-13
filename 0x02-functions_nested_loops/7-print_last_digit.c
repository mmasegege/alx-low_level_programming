#include "main.h"

/**
* print_last_digit - this returns the value of the last digit of a number
* @n: the integer to be passed
* Return: returns last digit of the passed number
*/
int print_last_digit(int n)
{
	int output;

	if (n >= 0)
		output = n % 10;
	else
		output = (n % 10) * -1;
	_putchar('0' + output);
	return (output);
}
