#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @count: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int count, ...)
{
	unsigned int i;
	int sum = 0;
	int value;
	va_list args;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		if (count == 0)
			return (0);

		value = va_arg(args, int);

		sum += value;
	}
	va_end(args);
	return (sum);
}
