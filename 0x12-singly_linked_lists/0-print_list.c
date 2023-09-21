#include "lists.h"

/**
 * print_list - print all the element of list
 * @h: pointer to the list
 * Return: return the number of elements
 */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
		
	}
	return (count);
}
