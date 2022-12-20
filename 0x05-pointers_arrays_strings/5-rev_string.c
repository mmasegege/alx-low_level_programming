#include <stdio.h>
#include "main.h"

/**
 * rev_string - the function prints a reverse string
 * @s: the string to be reversed
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i, j, k, tempVal;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = 0;

	while (k < j)
	{
		tempVal = s[k];
		s[k] = s[j];
		s[j] = tempVal;
		k++;
		j--;
	}
}
