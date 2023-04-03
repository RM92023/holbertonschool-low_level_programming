#include "lists.h"
#include <stdlib.h>
/**
 * list_len - this function prints the list of elements
 * @h: the header
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
