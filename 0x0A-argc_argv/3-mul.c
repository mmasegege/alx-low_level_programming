#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	printf("%d\n", sum);

	return (0);
}
