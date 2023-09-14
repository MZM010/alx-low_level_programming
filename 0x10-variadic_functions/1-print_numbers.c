#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pedro;

	va_start(pedro, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pedro, int));
		if(i < n - 1)
		{
			printf("%s ", separator);
		}
	}
	va_end(pedro);
	printf("\n");
}
