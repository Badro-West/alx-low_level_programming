#include "lists.h"
#include <stdio.h>

/**
 * print_listint_recursive - Prints a singly linked list of integers recursively.
 * @h: Pointer to the head of the linked list.
 * @nodes: Pointer to a variable to store the number of nodes.
 * Return: Number of nodes in the linked list.
 */
void print_listint_recursive(const listint_t *h, size_t *nodes)
{
    if (h == NULL)
        return;

    (*nodes)++;
    printf("%d\n", h->n);
    print_listint_recursive(h->next, nodes);
}

/**
 * print_listint - Prints a singly linked list of integers.
 * @h: Pointer to the head of the linked list.
 * Return: Number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
    size_t nodes = 0;
    print_listint_recursive(h, &nodes);
    return nodes;
}

