#include <stdio.h>
#include <stdlib.h>

/**
 * main- function that returns the product of 2 numbs
 * @argc: counts the number of args passed
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	exit(EXIT_SUCCESS);
}
