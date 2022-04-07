#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns a pointer to memory
 * which on failure, returns 98
 * @b: size of bytes to be reserved
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
