#include "main.h"

/**
 * _isalpha - Check if character is alphabet character
 *@c: type int character
 *
 * Return: one if letter, lowercase or uppercase and zero otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}