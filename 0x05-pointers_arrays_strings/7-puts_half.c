#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/



void puts_half(char *str)
{
	/* cpount the length of the the string */

	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	/* divide the length by 2 to count from the half of the string */

	for (i = i / 2 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
