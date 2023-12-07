#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *my_head = head;
    dlistint_t *alpha;
    while (head)
    {
        alpha = my_head->next;
        free(my_head);
        my_head = alpha;
    }
}