#include<stdio.h>
#include<stdlib.h>
/*
* main - function prints out the name of
* its program name to standard output
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
