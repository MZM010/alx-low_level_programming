#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list supra;

	va_start(supra, n);

	for (i = 0; i < n; i++)
	{
		sum +=  va_arg(supra, int);
	}
	va_end(supra);

	return (sum);
}
