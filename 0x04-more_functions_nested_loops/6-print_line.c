#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_line(int n)
{

	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
}
