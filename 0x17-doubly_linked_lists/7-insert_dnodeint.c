#include "lists.h"
/**
 * calcSize - calc the size
 * @node: the head
 * Return: the size of the linked list
 */
int calcSize(dlistint_t *node)
{
	int size = 0;

	while (node)
	{
		node = node->next;
		size++;
	}

	return (size);
}
/**
 * insert_dnodeint_at_index - return the number of element by index
 * @h: the head
 * @idx: index
 * @n: data
 * Return: the value of the index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = *h;
	unsigned int size = 0;
	unsigned int i = 0;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	size = calcSize(*h);
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == size)
		add_dnodeint_end(h, n);
	else
	{
		for (i = 0; i < (unsigned int)idx; i++)
			temp = temp->next;
		new->n = n;
		new->next = temp->next;
		temp->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
