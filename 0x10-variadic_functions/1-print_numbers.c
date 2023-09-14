#include "variadic_functions.c"

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
		printf("%d%c ", va_arg(pedro, int), separator);
	}
	va_end(pedro);
	printf("\n");
}
