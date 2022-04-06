#include <stdio.h>
#include <stdlib.h>
/**
* main - prints out the number of arguments
* @argc: counts the number of arg passed
* @argv: arrays of string
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		(void)argv;
		printf("%d\n", argc - 1);
	}
	exit(EXIT_SUCCESS);
}
