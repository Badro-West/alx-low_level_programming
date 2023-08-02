#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    for (const listint_t *current = h; current != NULL; current = current->next)
    {
        printf("%d\n", current->n);
        count++;
    }
    return count;
}

