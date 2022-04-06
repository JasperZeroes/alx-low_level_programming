#include <stdio.h>
#include <stdlib.h>

/**
 * main- function that returns the numb of args passed to it
 * @argc: counts the number of args passed
 * @argv: an array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	exit(EXIT_SUCCESS);
}

