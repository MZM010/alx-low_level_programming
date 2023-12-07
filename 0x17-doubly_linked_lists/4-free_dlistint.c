#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *alpha;
    while (head)
    {
        alpha = head->next;
        free(head);
        head = alpha;
    }
}