#include "lists.h"
/**
 * list_len - return the length of h
 * @h: pointer
 * Return: the length
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
