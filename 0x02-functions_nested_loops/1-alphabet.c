#include "main.h"

/**
* print_alphabet - Prints out lowercase alphabet followed by a new line
* Return: Returns 0
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
