#include <stdio.h>
#include <stdlib.h>
/*
* main - function prints out the name of
* its program name to standard output
* @argc is variable that keeps count of strings entered
* @argv is the array string
* Returns : EXIT_SUCCESS
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	exit(EXIT_SUCCESS);
}
