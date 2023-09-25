#include "lists.h"
/**
 * listint_len - return the len of list
 *
 * @h: the linked list
 * Return: the sum of lists
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
