#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
