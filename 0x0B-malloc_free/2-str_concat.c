#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[c] != '\0')
		c++;
	while (s2[i] != '\0')
		i++;
	concat = malloc(sizeof(char) * (i + c + 1));
	if (concat == 0)
		return (0);
	i = c = 0;
	while (s1[c] != '\0')
	{
		concat[c] = s1[c];
		c++;
	}
	while (s2[i] != '\0')
	{
		concat[c] = s2[i];
		i++;
		c++;
	}
	concat[c] = '\0';
	return (concat);
}
