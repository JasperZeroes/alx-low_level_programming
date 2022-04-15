#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);

		if (separator == NULL)
			printf("%d ", nums);

		printf("%d", nums);

		if (i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
