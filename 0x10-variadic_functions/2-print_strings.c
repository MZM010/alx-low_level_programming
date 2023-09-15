#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list character;
	char *str;

	va_start(character, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(character, char*);
		if (str == 0)
			str = "(nil)";
		printf("%s", str);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(character);
	printf("\n");
}
