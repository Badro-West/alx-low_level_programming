#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t n = 0;

    while (h)
    {
        printf("[%d] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
        h = h->next;
        n++;
    }
    
    return n;
}

