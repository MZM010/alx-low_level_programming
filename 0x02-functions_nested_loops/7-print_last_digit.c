#include "main.h"

/**
 * main - Entry piont
 *
 *
 *print_last_digit : print the last digit of a givin input
 *
 *@n : the given input
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = ((-1) * n) % 10;
	}
	else
	{
		n = n % 10;
	}
	return (n);
}
