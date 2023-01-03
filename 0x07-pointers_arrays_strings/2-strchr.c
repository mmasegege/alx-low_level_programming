include <stdio.h>
#include "main.h"

/**
 * _strchr - the function locates character in string
 * @s: this string is used to locate the first occurence of c
 * @c: the character to locate
 * Return: returns a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
