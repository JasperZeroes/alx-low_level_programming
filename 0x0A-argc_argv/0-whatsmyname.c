#include <stdio.h>
#include <stdlib.h>
/**
* main - function prints out the name of its program name to standard output
* @argc: variable that keeps count of strings entered
* @argv: the array string
* Return: Always 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	exit(EXIT_SUCCESS);
}
