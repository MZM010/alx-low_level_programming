#include "main.h"


/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++] != '\0')
		dest_len++;


	for (index = 0; src[index] != '\0' ; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
