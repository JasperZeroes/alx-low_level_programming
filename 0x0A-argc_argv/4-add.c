#include <stdio.h>
#include <stdlib.h>

/**
 * main- function that returns the sum of +ve numbs
 * @argc: counts the number of args passed
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			int isdigit(int c);

			if  (isdigit(*argv[i]) != 0 /*&& isdigit(*argv[i])>= 0*/)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
