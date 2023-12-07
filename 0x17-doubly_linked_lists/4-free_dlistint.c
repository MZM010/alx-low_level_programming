#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    while (head)
    {
        next = head->next;
        free(head);
        head = next;
    }
}