#include <stdio.h>
/**
 * main -prints name of the file it was compiled from
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
