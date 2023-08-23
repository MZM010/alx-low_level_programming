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
	int i = 0, j = 0;
	char str[];

	while (dest[i] != '\0')
	{
		str[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		str[j] = src[i];
		i++;
		j++;
	}
	return (str);
}
